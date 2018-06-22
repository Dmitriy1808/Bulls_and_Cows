#include <stdio.h>
#include "game.h"

void game()
{
	int num=0;
    generation(A[N], B[N]);
    printf("NUMBER B C\n");
    printf("----------\n");
    while(1)
    {	
        input(B[N]);
        num++;
        int bull=bulls(A[N], B[N]), int cor = cows(A[N], B[N]);
        
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
