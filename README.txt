# c-test-harness
Not testing is bad, mkay.

Ah, yes. Don't you just love running tests? Yeah, me neither.
But what can we do about it? If your answer is "use an array of bool (*)(void)
and a macro" - you're totally right.

Use the macro for comparing the test results, fill an array with all your test 
functions, and press play. If a check fails you get a message with the function 
name, the line number, and the expression. NOTE: A test function is a test unit
- the "Tests failed/passed" report refers to test functions, not individual 
checks. If a check fails inside a test function, the function returns false, the
test is considered failed, and no other checks inside that function are 
performed. If you want successful checks reported as well, define VERBOSE (see
test.h)

See test_all.c and the test project for an example, ./boilerplate for a single
unit boilerplate. 
