#include <iostream>
using namespace std;

int main() {
    long long N, S;
    cin >> N >> S;
    long long A[61];    

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (long long i = 0; i < (1LL << N); i++) {
        long long sum = 0;
        for (long long j = 1; j <= N; j++) {
            if ((i & (1LL << (j-1))) != 0LL) {
                sum += A[j];
            }
        }
        if (sum == S) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}