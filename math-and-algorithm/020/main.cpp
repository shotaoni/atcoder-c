#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, N) for(ll i = 0; i < N; i++)
#define rep3(i, A, B) for(ll i = A; i < N; i++)

int main() {
    ll N;
    cin >> N;
    ll A[N];
    ll answer = 0;

    rep(i, N) cin >> A[i];

    rep(i, N) {
        rep3(j, i + 1, N) {
            rep3(k, j + 1, N) {
                rep3(l, k + 1, N) {
                    rep3(m, l + 1, N) {
                        if(A[i] + A[j] + A[k] + A[l] + A[m] == 1000) {
                            answer++;
                        }
                    }
                }
            }
        }
    }

    cout << answer << endl;

    return 0;
}