#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;
    --N;

    for (int i = 0; N >= i; N--){
        string row = "C";

        for (int j = 0; j < N; j++){
            row.append(".");
        }

        cout << row << endl;
    }
}