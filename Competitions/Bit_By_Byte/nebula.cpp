#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N, K;
        cin >> N >> K;

        vector<int> nebula(N);

        for (int j = 0; j < N; j++) {
            cin >> nebula[j];
        }

        for (int j = 0; j <= N - K; j++) {
            int biggest = nebula[j];

            for (int k = 1; k < K; k++) {
                biggest = max(biggest, nebula[j + k]);
            }

            cout << biggest << (j < N - K ? " " : "");
        }

        cout << (i + 1 < T ? "\n" : "");
    }
}