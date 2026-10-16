#include <iostream>
using namespace std;

int main(){
    int H, N;
    cin >> H >> N;

    int score = 0;

    while (score < H*N){
        score += N;
        cout << "HEIGHT: " << score << endl;
    }

    if (score >= 20){
        cout << "TOWER COMPLETE!";
    }

    else {
        cout << "KEEP STACKING!";
    }
}