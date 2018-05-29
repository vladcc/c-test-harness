#include <stdio.h>
#include <stdbool.h>
#include "proj_two.h"
#include "test_proj_two.h"
#include "../test.h"

bool test_proj_two_foo(void);
bool test_proj_two_bar(void);

static int passed = 0;
static int failed = 0;

static ftest tests[] = {
	test_proj_two_foo,
	test_proj_two_bar,
};

//------------------------------------------------------------------------------

bool test_proj_two_foo(void)
{
	check(proj_two_foo() == -21);
	return true;
}

//------------------------------------------------------------------------------

bool test_proj_two_bar(void)
{
	check(proj_two_bar() == 30);
	return true;
}
//------------------------------------------------------------------------------

void run_test_proj_two(void)
{
    int i, end = sizeof(tests)/sizeof(*tests);

    int passed = 0;
    for (i = 0; i < end; ++i)
        if (tests[i]())
            ++passed;

    if (passed != end)
        putchar('\n');

    failed = end - passed;
    printf("%s\ntests passed: %d\n", __FILE__, passed);
    printf("%s\ntests failed: %d\n", __FILE__, failed);
    puts("------------------------------------------------");
    return;
}
//------------------------------------------------------------------------------

int test_proj_two_passed(void)
{
    return passed;
}
//------------------------------------------------------------------------------

int test_proj_two_failed(void)
{
    return failed;
}
//------------------------------------------------------------------------------
