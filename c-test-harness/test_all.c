#include <stdio.h>
#include "./test_proj_one/test_proj_one.h"
#include "./test_proj_two/test_proj_two.h"

void run_all(void)
{
	run_test_proj_one();
	run_test_proj_two();
	return;
}

int main(int argc, char * argv[])
{
    run_all();
    int all_passed = test_proj_one_passed() + test_proj_two_passed();
    int all_failed = test_proj_one_failed() + test_proj_two_failed();
    printf("All passed: %d\n", all_passed);
    printf("All failed: %d\n", all_failed);
    return all_failed;
}
