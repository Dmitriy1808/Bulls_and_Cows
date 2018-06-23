#define CTEST_MAIN

#include <ctest.h>
#include <bulls.h>

CTEST(bulls, full_bull)
{
    int A[N] = {1, 2, 3, 4}, B[N] = {1, 2, 3, 4};
    int res = bulls(A, B);
    int exp = 4;
    
    ASSERT_EQUAL(exp, res);
}

CTEST(bulls, null_bull)
{
    int A[N] = {1, 2, 3, 4}, B[N] = {5, 6, 7, 8};
    int res = bulls(A, B);
    int exp = 0;
    
    ASSERT_EQUAL(exp, res);
}

CTEST(bulls, two_bull)
{
    int A[N] = {1, 2, 3, 4}, B[N] = {5, 6, 3, 4};
    int res = bulls(A, B);
    int exp = 2;
    
    ASSERT_EQUAL(exp, res);
}

CTEST(input, check_num_array_ok)
{
    char T[5] = "1234"; 
    int res = check_num(T);
    int exp = 1;
    
    ASSERT_EQUAL(exp, res);
}

CTEST(input, check_num_array_no_ok)
{
    char T[5] = "abc1"; 
    int res = check_num(T);
    int exp = 0;
    
    ASSERT_EQUAL(exp, res);
}

CTEST(input, string_to_int_ok)
{
    char T[5] = "1234"; 
    int B[4];
    int res = string_to_int(T, B);
    int exp[4] = {1, 2, 3, 4};
    
    ASSERT_DATA(exp, sizeof(exp), B, sizeof(B));
}



int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}
