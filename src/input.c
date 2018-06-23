#include <stdio.h> 
#include <time.h>
#include "input.h"

int check_num(char T[5])
{
    return T[4] == '\0' && T[0] >='0' && T[0] <='9' && T[1] >= '0' && T[1] <= '9' && T[2] >= '0' && T[2] <= '9' && T[3] >= '0' && T[3] <= '9';
}

void string_to_int(char T[5], int B[4])
{
    for (int i = 0; i < 4; i++) {
        B[i] = T[i] - 48;
    }
}

int check_concidence(int B[4])
{
    for(int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            if (B[j] == B[i]) {
                return 1;
            }   
        }
    }
    return 0;
}

void input(int B[N])
{
    char T[5];
    while (1) {
        printf("\nInput number\n");
        scanf("%s", T);
        if(!check_num(T)) {
            printf("\nNumber not correct\n");
            continue;
        }
        string_to_int(T, B);
        if (check_concidence(B)) {
            printf("\nNumber not correct\n");
            continue;
        }
        break;
    }
}
