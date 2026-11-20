#include <iostream>
#include <string>

using namespace std;

class flooring{
    public:
        int x;
        int y;

        
}

class Spike{
    public:
        int x;
        int y;

        int damage;

        Spike(int x, int y, int damage)
        {
            x = x;
            y = y;

            damage = damage;
        }
};



class Player{
    public:
        int health;

        int x;
        int y;
        int jumps = 0;

        Player(int health, int x, int y){
            health = health;
            x = x;
            y = y;
        }

        void movePlayer(int up, int right){
            if (up > 0){
                x += 1;
                jumps = 1
            }

            if ()
        }
};

int main(){

}