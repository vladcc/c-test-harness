#ifndef TEST_H
#define TEST_H

//#define VERBOSE

#define base_msg "\n%s\n%s()\nline %d\n(%s)\n"
#define fail_msg "check failed\n"
#define pass_msg "check passed\n"

#define fail_report(expr)\
if (!(expr))\
return printf(base_msg fail_msg, __FILE__, __func__, __LINE__, #expr), false;

#define pass_report(expr)\
else printf(base_msg pass_msg, __FILE__, __func__, __LINE__, #expr);

#ifdef VERBOSE
#define test(expr) fail_report(expr) pass_report(expr)
#else
#define test(expr) fail_report(expr)
#endif

#define check(expr) do {test(expr)} while(0)

typedef bool (*ftest)(void);

#endif
