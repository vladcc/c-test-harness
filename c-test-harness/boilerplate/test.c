#include <stdio.h>
#include <stdbool.h>
#include "test.h"

static ftest tests[] = {

};

//------------------------------------------------------------------------------

int main(void)
{
	run_tests();
	return 0;
}
//------------------------------------------------------------------------------

void run_tests(void)
{
    int i, end = sizeof(tests)/sizeof(*tests);

    int passed = 0;
    for (i = 0; i < end; ++i)
        if (tests[i]())
            ++passed;

    if (passed != end)
        putchar('\n');

    printf("%s tests passed: %d\n", __FILE__, passed);
    printf("%s tests failed: %d\n", __FILE__, end - passed);
    puts("------------------------------------------------");
    return;
}
//------------------------------------------------------------------------------
