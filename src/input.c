#include <stdio.h> 
#include <time.h>
#include "input.h"

void input(int B[N])
{
    char T[5];
    label:
    printf("\nInput number\n");
    scanf("%s",T);
    if(!(T[4]== '\0' && T[0]>='0' && T[0]<='9' && T[1]>='0' && T[1]<='9' && T[2]>='0' && T[2]<='9' && T[3]>='0' && T[3]<='9'))
    {
        printf("\nNumber not correct\n");
        goto label;
    }
    for (int i = 0; i < 4; i++) {
        B[i] = T[i] - 48;
    }
    for(int i = 0; i < N; i++)
    {
       for (int j = i+1; j < N; j++)
       {
            if (B[j] == B[i])
            {
                printf("\nNumber not correct\n");
                goto label;
            }   
       }
       
    }
}

