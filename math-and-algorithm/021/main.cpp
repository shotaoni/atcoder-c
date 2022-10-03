#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for(ll i = 0; i < N; i++)

int main() {
    ll N, R;
    ll Fact_n = 1;
    ll Fact_r = 1;
    ll Fact_nr = 1;

    cin >> N >> R;

    for(ll i = 1; i <= N; i++)
        Fact_n *= i;
    for(ll i = 1; i <= R; i++)
        Fact_r *= i;
    for(ll i = 1; i <= N - R; i++)
        Fact_nr *= i;

    cout << Fact_n / (Fact_r * Fact_nr) << endl;
    return 0;
}