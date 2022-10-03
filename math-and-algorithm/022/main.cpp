#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for(ll i = 1; i <= N; i++)

int main() {
    ll N;
    cin >> N;
    ll A[N];
    ll cnt[100000];
    ll answer = 0;

    rep(i, N) cin >> A[i];
    rep(i, 99999) cnt[i] = 0;
    rep(i, N) cnt[A[i]] += 1;

    rep(i, 49999) answer += cnt[i] * cnt[100000 - i];

    answer += cnt[50000] * (cnt[50000] - 1) / 2;

    cout << answer << endl;

    return 0;
}
