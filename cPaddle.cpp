//
// Created by Sander on 6/4/2017.

#include <iostream>;

using namespace std;
class cPaddle{
private:
    int x,y;
    int originalX, originalY;
public:
    cPaddle(){
        x = y = 0;
    }
    cPaddle(int posX, int posY) : cPaddle(){
        originalX = posX;
        originalY = posY;
        x = posX;
        y = posY;
    }
    inline void reset(){x = originalX, y = originalY;}

    inline int getX() const {
        return x;
    }

    inline int getY() const {
        return y;
    }

    inline void moveUP(){y--;}
    inline void moveDown(){y++;}
    friend ostream & operator<<(ostream & o, cPaddle c){
        o << "Paddle [" << c.x << "," << c.y << "]" << endl;
        return o;
    }
};