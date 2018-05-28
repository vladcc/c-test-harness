# c-test-harness
Not testing is bad, mkay.

Ah, yes. Don't you just love running tests? Yeah, me neither.
But what can we do about it? If your answer is "use an array of bool (*)(void)
and a macro" - you're totally right.

Use the macro for comparing the test results, fill an array with all your test 
functions, and press play. If a test fails you get a message with the function 
name, the line number, and the expression. Optionally, adding the filename when 
testing multiple units is helpful. Check test_all.c and the test project for an
example, ./boilerplate for a single unit boilerplate. 
