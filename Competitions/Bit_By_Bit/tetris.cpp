#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    int score = 0;
    switch (n){
        case(1):
            score = 100;
            break;
        case(2):
            score = 300;
            break;
        case(3):
            score = 500;
            break;
        case(4):
            score = 800;
            break;
    }

    string ans = (n == 4) ? "TETRIS!" : "NICE!";

    cout << score << endl << ans;
}