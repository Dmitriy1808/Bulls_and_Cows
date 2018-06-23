#define CTEST_MAIN

#include <ctest.h>
#include <bulls.h>
#include <cows.h>
#include <input.h>


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
    
    ASSERT_TRUE(res);
}

CTEST(input, check_num_array_no_ok)
{
    char T[5] = "abc1"; 
    int res = check_num(T);
    
    ASSERT_FALSE(res);
}

CTEST(input, string_to_int_ok)
{
    char T[5] = "1234"; 
    int B[4];
    string_to_int(T, B);
    int exp[4] = {1, 2, 3, 4};
    int res = 1;
    for (int i = 0; i < 4; i++) {
        if (B[i] != exp[i]) {
            res = 0;
            break;
        }
    }
    
    ASSERT_TRUE(res);
}

CTEST(cows, full_cows)
{
	int A[N] = {1, 2, 3, 4}, B[N] = {1, 2, 3, 4};
	int res = cows(A, B);
	int exp = 0;
	
	ASSERT_EQUAL(exp, res);
}

CTEST(cows, null_cows)
{
	int A[N] = {1, 2, 3, 4}, B[N] = {4, 3, 2, 1};
	int res = cows(A, B);
	int exp = 4;
	
	ASSERT_EQUAL(exp, res);
}

CTEST(cows, several_cows)
{
	int A[N] = {1, 2, 3, 4}, B[N] = {1, 3, 2, 4};
	int res = cows(A, B);
	int exp = 2;
	
	ASSERT_EQUAL(exp, res);
}

CTEST(check_concidence, concidence_ok)
{
	int B[N] = {1, 3, 1, 4};
	int res = check_concidence(B);
	int exp = 1;
	
	ASSERT_EQUAL(exp, res);
}

CTEST(check_concidence, concidence_not_ok)
{
	int B[N] = {1, 3, 5, 4};
	int res = check_concidence(B);
	int exp = 0;
	
	ASSERT_EQUAL(exp, res);
}

int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}
