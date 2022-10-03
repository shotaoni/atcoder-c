#include <iostream>
using namespace std;

int main() {
    int N;
    long long answer = 1;

    cin >> N;

    for (int i = 1; i < N; i++) {
        answer += answer * i;
    }

    cout << answer << endl;
}