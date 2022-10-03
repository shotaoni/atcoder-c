#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long N) {
    for (long long i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long N;
    
    cin >> N;

    if (isPrime(N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
