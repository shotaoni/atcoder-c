#include <iostream>
using namespace std;

int main() {
    int N, A[99];
    cin >> N;
    int buf = 0;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        buf += A[i];
    }
    cout << buf % 100 << endl;
    return 0;
}