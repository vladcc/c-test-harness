# c-test-harness
Not testing is bad, mkay?

Ah, yes. Don't you just love running tests? Yeah, me neither.
But what can we do about it? If your answer is "use an array of bool (*)(void)
and a header file" - you're totally right.

Use the check macro for comparing test results, fill an array with all your test
functions, and press play. You'd usually get a message only when a check fails,
listing the function name, the line number, and the expression. If you define
REPORT_FILE and REPORT_PASSED, the file name and all checks that pass are also
printed respectively. Defining REPORT_VERBOSE defines REPORT_FILE and
REPORT_PASSED if they have not been previously defined.

See test_all.c and the test projects for an example, ./boilerplate for a single
unit boilerplate.
