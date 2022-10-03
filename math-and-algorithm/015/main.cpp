#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B;

    cin >> A >> B;

    while(A >= 1 && B >= 1) {
        if(A >= B) {
            A %= B;
        } else {
            B %= A;
        }
    }
    if(A >= 1) {
        cout << A << endl;
    } else {
        cout << B << endl;
    }

    return 0;
}