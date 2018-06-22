#include <stdio.h> 
#include <time.h>
#include "input.h"

void input(int B[N])
{
    int q=0,w=0,z=0;
    label:
    printf("\nInput number\n");
    scanf("%d",&q);
    w = q;
    for (int i = 0; i < N; i++)
    {
        if (q >= 0 && q <= 9999)
        {
            z = w%10;
            B [3-i] = z;
            w = w/10;
        }
        else 
        {
            printf("\nNumber no corekc\n");
            goto lable;
        }
    }
    for(int i = 0; i < N; i++)
    {
       for (int j = i+1; j < N; j++)
       {
            if (B[j] == B[i])
            {
                printf("\nNumber no corekc\n");
                goto label;
            }   
       }
    }
}

