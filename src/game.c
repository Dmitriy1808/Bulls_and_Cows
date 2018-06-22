#include <stdio.h>
#include "game.h"

void game()
{
	int num=0;
    generation(int A[N], int B[N]);
    printf("NUMBER B C\n");
    printf("----------\n");
    while(1)
    {	
        input(int B[N]);
        num++;
        int bull=bulls(int A[N], int B[N]), int cor = cows(int A[N], int B[N]);
        
		if (num == 5 )
			break;
        printf("       %d %d \t\t\tAttempt &d\n",bull, cor, num);
        if (bull() == 4)
        {
            printf("YOU'RE WINS!!!"<<"\t\tQUANTITY OF ATTEMPTS=",num);
            break;
        }
    }
}
