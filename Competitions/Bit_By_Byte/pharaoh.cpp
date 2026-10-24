#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int N;
        cin >> N;
        int largest = 0;

        for (int j = 0; j < N; j++){
            int num = 0;
            cin >> num;
            if (largest < num){
                largest = num;
            }
        }

        cout << largest << endl;
    }
}