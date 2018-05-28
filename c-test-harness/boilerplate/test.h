#ifndef TEST_H
#define TEST_H

#define check(expr)\
do\
{\
    if (!(expr))\
    {\
        printf("\nIn\n%s\n%s()\nline %d\n", __FILE__, __func__, __LINE__);\
        printf("(%s) has failed\n", #expr);\
        return false;\
    }\
} while(0)

#ifdef VERBOSE
    #define report_name()   fprintf(stderr, "%s()\n", __func__)
#else
    #define report_name()
#endif

typedef bool (*ftest)(void);

#endif
