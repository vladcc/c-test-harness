#include <stdio.h>
#include <stdbool.h>
#include "test.h"

static ftest tests[] = {

};

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

    int failed = end - passed;
    report(passed, failed);
    return;
}
//------------------------------------------------------------------------------

int main(void)
{
	run_tests();
	return 0;
}
//------------------------------------------------------------------------------
