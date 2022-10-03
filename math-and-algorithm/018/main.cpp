#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    ll A[N];
    ll a = 0, b = 0, c = 0, d = 0;

    for(ll i = 0; i < N; i++) {
        cin >> A[i];
        switch(A[i]) {
        case 100:
            a++;
            break;
        case 200:
            b++;
            break;
        case 300:
            c++;
            break;
        case 400:
            d++;
            break;
        }
    }
    // 100 + 400 = 500　なので aとdの組み合わせが何通りあるか a * d通り
    // 同様に 200 + 300 = 500 d * c通り

    cout << (a * d + b * c) << endl;

    return 0;
}