//
// Created by Sander on 6/4/2017.
//
#include <iostream>
#include "cBall.cpp"
#include "cPaddle.cpp"
#include <time.h>
#include <conio.h>
#include "cGameManger.h"

class cGameManger{
private:
    int width, height;
    int score1, score2;
    char up1, down1, up2, down2;
    bool quit;
    cBall * ball;
    cPaddle *player1;
    cPaddle *player2;
public:
    cGameManger(int w, int h){
        srand(time(NULL));
        quit = false;
        up1 = 'w'; up2 = 'i';
        down1 = 's'; down2 = 'k';
        score1 = score2 = 0;
        width = w; height = h;
        ball = new cBall(w / 2, h/2);
        player1 = new cPaddle(1, h/2 -3);
        player2 = new cPaddle(w-2, h/2 -3);
    }
    ~cGameManger(){
        delete ball, player1, player2;
    }
    void ScoreUp(cPaddle *player){
        if(player == player1){
            score1++;
        } else if (player == player2){
            score2++;
        }
        ball -> reset();
        player1 ->reset();
        player2 ->reset();
    }
};