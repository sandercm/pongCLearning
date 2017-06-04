#include <iostream>
#include "cBall.cpp"
#include "cPaddle.cpp"
#include "cGameManger.cpp"

using namespace std;


int main(){
    cBall c(0,0);
    cPaddle p(0,0);
    cPaddle p1(10,0);
    cout << p << endl;
    cout << p1 << endl;
    p.moveDown();
    p1.moveUP();
    cout << p << endl;
    cout << p1 << endl;
    return 0;
}