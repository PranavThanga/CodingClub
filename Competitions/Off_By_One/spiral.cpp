#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int top = 0;
    int bottom = N - 1;
    int left = 0;
    int right = N - 1;

    int num = 1;

    int spiral[100][100] = {0};

    while (top <= bottom && left <= right){
        // Right
        for (int i = left; i <= right; i++){
            spiral[top][i] = num++;
        }
        top++;

        // Down
        for (int i = top; i <= bottom; i++){
            spiral[i][right] = num++;
        }
        right--;

        if (top > bottom){
            break;
        }

        // Left
        for (int i = right; i >= left; i--){
            spiral[bottom][i] = num++;
        }
        bottom--;

        if (left > right){
            break;
        }

        // Up
        for (int i = bottom; i >= top; i--){
            spiral[i][left] = num++;
        }
        left++;
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << spiral[i][j];

            if (j + 1 < N){
                cout << " ";
            }
        }

        cout << endl;
    }
}