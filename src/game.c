#include <stdio.h>
#include "cows.h"
#include "bulls.h"
#include "generation.h"
#include "game.h"

void game(int A[N],int B[N])
{
	int num = 0;
    generation(A, B);
    printf("NUMBER B C\n");
    printf("----------\n");
    while (1)
    {	
        input(B);
        num++;
        printf("     B / C");
        printf("      %d %d \t\t\tAttempt %d\n",bulls( A, B), cows(A, B), num);
        if (bulls(A, B) == 4)
        {
            printf("YOU ARE WINS!!!");
			printf("\t\tQUANTITY OF ATTEMPTS = %d", num);
            break;
        }
    }
}

