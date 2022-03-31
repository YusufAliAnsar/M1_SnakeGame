#include<snake.h>
void setup()
{
	gameOver=0;
	x=width/2;
	y=height/2;
	
	label1:
	snakeX=rand()%20;
	if(snakeX==0)
    	goto label1;
    label2:
	snakeY=rand()%20;
	if(snakeY==0)
    	goto label2;
	 score = 0;	
snake();	
}
