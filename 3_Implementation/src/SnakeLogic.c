#include<snake.h>
void SnakeLogic()
{
	int i;
	int prevX=tailX[0];
	int prevY=tailY[0];	
	int prev2X,prev2Y;
	tailX[0]=x;
	tailY[0]=y;
	for(i=1;i<CountTail;i++)
	{
		prev2X=tailX[i];
		prev2Y=tailY[i];
		tailX[i]=prevX;
		tailY[i]=prevY;
		prevX=prev2X;
		prevY=prev2Y;
	}
	switch(flag)
	{
		case 1:
			y--;
			break;
		case 2:
			y++;
			break;
		case 3:
			x--;
			break;
		case 4:
			x++;
			break;
		default:
		    break;	
	}
	if(x<0||x>width||y<0||y>height)
	  gameOver =1;
	if(x==snakeX && y==snakeY) 
	{
		label3:
	snakeX=rand()%20;
	if(snakeX==0)
    	goto label3;
    label4:
	snakeY=rand()%20;
	if(snakeY==0)
    	goto label4;
    	score+=10;
    	CountTail++;
	 } 
}
