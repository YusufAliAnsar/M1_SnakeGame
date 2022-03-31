#ifndef _SNAKE_H_
#define _SNAKE_H_
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int width = 20, height=20;
int x,y,snakeX,snakeY,gameOver,flag,score;
int tailX[100],tailY[100];
int CountTail=0;

void setup();
void snake();
void input();
void SnakeLogic();

#endif
