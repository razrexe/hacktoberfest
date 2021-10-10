#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int i, j, height = 20;
int width = 20, gameover, score;
int x, y, fruitx, fruity, flag;


void draw()
{
	system("cls");
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			if (i == 0 || i == width - 1 || j == 0
				|| j == height - 1) {
				printf("#");
			}
			 else {
                if (i == x && j == y)
                    printf("0");
                else if (i == fruitx && j == fruity)
                    printf("*");
                else
                    printf(" ");
            }
		}
		printf("\n");
	}

	 printf("score = %d", score);
     printf("\nInstructions :\n");
     printf("Press 'u' for up\n");
     printf("Press 'd' for down\n");
     printf("Press 'l' for left\n");
     printf("Press 'r' for right\n");
     printf("press X to quit the game");
}

void setup()
{
    gameover = 0;
    x=height/2;
    y=width/2;
    label1:
        fruitx=rand()%20;
        if(fruitx==0)
         goto label1;
    label2:
      	fruity=rand()%20;
      	if(fruity==0)
      	 goto label2;

     score=0;
}

void input(){
	if(kbhit())
	{
		switch(getch())
		{
			case 'u' :
				flag=1;
				break;
			case 'r':
				flag=2;
				break;
			case 'd' :
				flag=3;
				break;
			case 'l' :
				flag=4;
				break;
			case 'x' :
				gameover=1;
				break;
		}
	}
}

void logic()
{
	sleep(0.8);
	switch(flag)
	{
		case 1:
			x--;
			break;
		case 2:
			y++;
			break;
		case 3:
			x++;
			break;
		case 4:
			y--;
			break;
		default:
			break;
	}

	if(x<0 || x>height || y<0 || y>width)
		gameover=1;

	if(x==fruitx && y==fruity)
	{
		label3:
        fruitx=rand()%20;
        if(fruitx==0)
         goto label3;
    	label4:
      	fruity=rand()%20;
      	if(fruity==0)
      	 goto label4;

      	score+=10;
	}
}


void main()
{

	setup();

	while(!gameover)
	{
		draw();
		input();
		logic();
	}


}
