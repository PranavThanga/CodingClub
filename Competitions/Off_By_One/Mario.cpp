#include <iostream>

using namespace std;

int main(){
    int N;
    int MAX;
    cin >> N >> MAX;

    bool fell = false;

    int platforms[100000];

    for (int i = 0; i < N; i++){
        cin >> platforms[i];
    }

    int height = 0;
    int energy = 0;

    for (int i = 1; i < N; i++){
        height = abs(platforms[i - 1] - platforms[i]);
        energy += height;
        
        if (height > MAX){
            cout << "FELL at gap " << i << endl;
            fell = true;

            break;
        }
    }

    if (!fell){
        cout << "MADE IT\n" << energy << endl;
    }
}