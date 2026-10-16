#include <iostream>
using namespace std;

int main(){
    int l;
    cin >> l;

    switch (l){
        case(0):
            cout << "GAME OVER!";
            break;

        case(1):
            cout << "DANGER ZONE!";
            break;

        case(2):
            cout << "BE CAREFUL!";
            break;

        case(3):
            cout << "FULL HEALTH!";
            break;
    }
}

