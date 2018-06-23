#include <stdio.h> 
#include "cows.h"

int cows(int A[N],int B[N])
{
    int cor = 0;
    for (int i = 0; i < 4; i++) {
        for(int j = 0;j < 4; j++) {
            if(A[i] == B[j] && i != j)
                cor++;
        }
    }
    
    return cor;
}
