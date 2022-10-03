#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    ll A[N];
    ll a = 0, b = 0, c = 0;

    for(ll i = 0; i < N; i++) {
        cin >> A[i];
        switch(A[i]) {
        case 1:
            a++;
            break;
        case 2:
            b++;
            break;
        case 3:
            c++;
            break;
        }
    }

    // xマイある赤色から2枚選ぶ方法 x C 2
    // 同様に y C 2
    //  z C 2
    // x(x - 1) / 2 + ... で求められる

    cout << a * (a - 1) / 2 + b * (b - 1) / 2 + c * (c - 1) / 2 << endl;

    return 0;
}