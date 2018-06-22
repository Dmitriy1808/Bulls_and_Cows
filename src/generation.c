#include <stdio.h>
#include <time.h>
#include "generation.h"

void generation(int A[N],int B[N])
{ 
	srand(time(0));//rand
	for (int i=0; i<N; i++)
	{
		int f;
		int temp;
		do
		{
            f = 1;
            temp = rand()%9;
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

