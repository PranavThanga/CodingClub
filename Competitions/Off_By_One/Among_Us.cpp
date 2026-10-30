#include <iostream>
using namespace std;

int main(){
    int R, N;
    bool ejected = false;
    cin >> R >> N;

    for (int i = 1; i <= R; i++){
        int nums[1000];
        int votes = 0;

        for (int j = 0; j < N; j++){
            cin >> nums[j];
            votes += nums[j];
        }

        if (votes > (N / 2.0)){
            cout << "EJECTED round " << i << endl;
            ejected = true;
            break;
        }
    }

    if (!ejected){
        cout << "NO EJECTION\n";
    }
}