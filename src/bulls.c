#include <stdio.h>
#include "bulls.h"

int bulls(int A[N], int B[N])
{
	int bull = 0;
    for (int i = 0; i < N; i++)
        if (A[i] == B[i])
            bull++;
    return bull;
}

