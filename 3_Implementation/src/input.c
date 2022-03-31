#include<snake.h>
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
SnakeLogic();
}
