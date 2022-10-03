#include <iostream>
using namespace std;

int main() {
    int N, X, Y;
    int count = 0;

    cin >> N >> X >> Y;

    for (int i = 1; i <= N; i++) {
        if (i % X == 0 || i % Y == 0) {
            count++;
        }
    }

    cout << count << endl;
}