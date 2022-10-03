#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;

    cin >> N;

    for(long long i = 2; i * i <= N; i++) {
        while(N % i == 0) {
            N = N / i;
            cout << i << " ";
        }
    }
    if(N >= 2) {
        cout << N << endl;
    } else {
        cout << endl;
    }

    return 0;
}