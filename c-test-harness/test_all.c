#include <stdio.h>
#include "./test_proj_one/test_proj_one.h"
#include "./test_proj_two/test_proj_two.h"

void run_all(void);

int main(int argc, char * argv[])
{
    run_all();
    printf("All passed: %d\n", test_proj_one_passed() + test_proj_two_passed());
    printf("All failed: %d\n", test_proj_one_failed() + test_proj_two_failed());
    return 0;
}

void run_all(void)
{
	run_test_proj_one();
	run_test_proj_two();
	return;
}
