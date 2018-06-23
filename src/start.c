#include <stdio.h>
#include <stdlib.h>
#include "start.h"
#include "game.h"

int main()
{
    int A[N], B[N];
    int f = 0;
    int M = 0;
    int S = 0;
    printf("Hi this is a game of bulls and cows.The computer conceived the number you need to guess it\n");
    printf("Game start=1 Exit=0 \n");
    scanf("%d", &S);
    if (S == 1) {
        while (f == 0) {
            game(A, B);
            printf("want to play again?(YES=1/NO=0)\n");
            scanf("%d", &M);
            if (M != 1) {
                f=1;
            } else {
                system("clear");
            }
        }
        system("pause");
    }
    else 
    {
        printf("Good bye \n");
    }
}
