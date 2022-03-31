#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int width = 20, height=20;
int x,y,snakeX,snakeY,gameOver,flag,score;
int tailX[100],tailY[100];
int CountTail=0;
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
}
void snake()
{
	int i,j,k;
	system("cls");
	for(i=0;i<width;i++)
	{
		for(j=0;j<height;j++)
    	{
    		if(i==0||i==height-1||j==0||j==width-1 )
    		{
    			printf("*");
			}
	    	else
	    	{
	    		if(i==x && j==y)
	    		  printf("X");
	    		else if(i==snakeX && j==snakeY)
	    		  printf("F");
	    		else
	    	   	{
	    	   		int ch=0;
	    	   		for(k=0;k<CountTail;k++){
	    	   			if(i==tailX[k] && j==tailY[k])
	    	   			{
	    	   				printf("o");
	    	   				ch=1;
						   }
					   }
					   if(ch==0)
					   printf(" ");
				   }
			}
	    }
	    printf("\n");
	}
	printf("SCORE=%d",score);
}// end of snake function
void input()
{
	if(kbhit())
	{
		switch(getch())
		{
			case 'a':   //aswz(a=up)(z=down)(a=left)(s=right)
				flag=1;
				break;
			case 's':
			    flag =2;
				break;
			case 'w':
			    flag = 3;
				break;
			case 'z':
				flag=4;
			    break;	
			case 'x':
			    gameOver=1;
				break;			
		}
	}
}
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
int main()
{
	int m, n;
	setup();
	while(!gameOver)
	{
		snake();
     	input();
		SnakeLogic();
		for(m=0;m<1000;m++)
		{
			for(n=0;n<10000;n++)
			{
				
			}
		}
		for(m=0;m<10;m++){
			for(n=0;n<100;n++){
			}
		}
	}
	return 0;
}
