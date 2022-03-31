#include<snake.h>
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
input();
}// end of snake function
