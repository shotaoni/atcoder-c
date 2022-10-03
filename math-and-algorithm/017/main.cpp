#include <bits/stdc++.h>
using namespace std;

long long GCD(long long A, long long B) {
    while(A >= 1 && B >= 1) {
        if(A < B) {
            B %= A;
        } else {
            A %= B;
        }
    }
    if(A >= 1)
        return A;
    return B;
}

long long LCM(long long A, long long B) {
    // A * Bにすると値が大きくなってオーバーフローする可能性がある
    return (A / GCD(A, B)) * B;
}

int main() {
    // 入力
    int N;
    cin >> N;

    long long A[N];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // 答えを求める
    long long answer = A[0];
    for(int i = 1; i < N; i++) {
        answer = LCM(answer, A[i]);
    }

    // 出力
    cout << answer << endl;
    return 0;
}