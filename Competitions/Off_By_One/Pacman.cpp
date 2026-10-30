#include <iostream>
using namespace std;

int main(){
    int N;
    int G;
    cin >> N >> G;

    for (int i = 0; i < G; i++){
        int ghostX;
        cin >> ghostX;

        cout << "BOO! at " << ghostX << endl;
    }

    cout << "Total: " << G << endl;
}