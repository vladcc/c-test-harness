#include <stdio.h>
#include <stdbool.h>
#include "proj_one.h"
#include "test_proj_one.h"
#include "../test.h"

bool test_proj_one_foo(void);
bool test_proj_one_bar(void);

static int passed = 0;
static int failed = 0;

static ftest tests[] = {
	test_proj_one_foo,
	test_proj_one_bar,
};

//------------------------------------------------------------------------------

bool test_proj_one_foo(void)
{
	report_name();
	check(proj_one_foo() == -1);
	return true;
}
//------------------------------------------------------------------------------

bool test_proj_one_bar(void)
{
	report_name();
	check(proj_one_bar() == -1);
	return true;
}
//------------------------------------------------------------------------------

void run_test_proj_one(void)
{
    int i, end = sizeof(tests)/sizeof(*tests);

    for (i = 0; i < end; ++i)
        if (tests[i]())
            ++passed;

    if (passed != end)
        putchar('\n');

    failed = end - passed;
    printf("%s tests passed: %d\n", __FILE__, passed);
    printf("%s tests failed: %d\n", __FILE__, failed);
    puts("------------------------------------------------");
    return;
}
//------------------------------------------------------------------------------

int test_proj_one_passed(void)
{
    return passed;
}
//------------------------------------------------------------------------------

int test_proj_one_failed(void)
{
    return failed;
}
//------------------------------------------------------------------------------
