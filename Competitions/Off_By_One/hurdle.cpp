#include <iostream>

using namespace std;

int main(){
    string hurdles;
    cin >> hurdles;

    bool jumped = false;
    bool survived = true;
    int jumpCount = 0;

    for (char obstacle : hurdles){
        if (obstacle == 'H'){
            if (jumped){
                cout << jumpCount - 1 << endl << "OUCH!\n";
                survived = false;
                break;
            }

            ++jumpCount;
            jumped = true;
        }

        else {
            jumped = false;
        }
    }

    if (survived){
        cout << jumpCount << endl << "SAFE!\n";
    }
}