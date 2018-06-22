#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "generation.h"

void generation(int A[N],int B[N])
{
	srand(time(NULL));
	for (int i=0; i<N; i++)
	{
		int f;
		int temp;
		do
		{
            f = 1;
            temp = rand() % 9;
            for (int j = 0; j < i; j++) 
			{
                if (A[j] == temp)
				{
                    f = 0;
                    break;
				}
			} 
		} while(f==0);
		A[i] = temp;
	}
}

