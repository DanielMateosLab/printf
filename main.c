
#include "stdio.h"
#include "ft_printf.h"

/*
TODO: Errors found:
For /Users/default/francinette/tests/printf/printfTester/tests/p_test.cpp:
30:     TEST(6, print(" %p %p ", LONG_MIN, LONG_MAX));
32:     TEST(8, print(" %p %p ", ULONG_MAX, -ULONG_MAX));
*/

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_printf(" %c %c %c %%", '0', '1', '2');
	// printf("%d", printf("%s", NULL));
	return (0);
}
