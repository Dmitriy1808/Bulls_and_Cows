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

int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}
