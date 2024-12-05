#include <stdio.h>
#include <limits.h>
#include "../ft_printf.h"

int	main(void)
{
	int	i = 1;
	int	d = 1;
	void *p = &i;
	unsigned int x = 123456789;
	unsigned int X = 123456789;
	unsigned int u = 123325435;
	char c = 'a';
	char *s = "HELLOOO";

	void *add;
	void *ptr;
	void *add2;
	void *ptr2;
	add = (void *)42;
	ptr = (void *)NULL;
	add2 = &i;
	ptr2 = &d;

	//OUT OF SCOPE TESTS, cannot use wall werror wextra with these so it's undefined! :)
	// printf("Undefined behaviour tests for fun:\n");
	// printf("printf: \nHello, here is an integer: %d, here is another integer: %i, here is a character: %c here is an unsigned int: %u\n"
	// 		"here is a string: %s, here is a lowercase hexadecimal: %x, here is an uppercase hexadecimal: %X,\n"
	// 		"here is a pointer address %p\n",
	// 		NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	// ft_printf("ft_printf: \nHello, here is an integer: %d, here is another integer: %i, here is a character: %c here is an unsigned int: %u\n"
	// 		"here is a string: %s, here is a lowercase hexadecimal: %x, here is an uppercase hexadecimal: %X,\n"
	// 		"here is a pointer address %p\n",
	// 		NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	// printf("\n");
	// printf("Wrong specifiers:\n");
	// printf("printf: Wrong specifier character: %d\n", printf("%t"));
	// printf("ftprintf: Wrong specifier character: %d\n", ft_printf("%t"));
	// printf("printf: Wrong specifier number: %d\n", printf("%2"));
	// printf("ftprintf: Wrong specifier number: %d\n", ft_printf("%2"));
	// printf("<--- printf: Percent at the end: %d\n", printf("Hello whats up %"));
	// printf("<--- ft_printf: Percent at the end: %d\n", ft_printf("Hello whats up %"));
	// printf("\n");

	//DEFINED TESTS
	printf("printf NULL TEST\n");
	printf(NULL);
	printf("ftprintf NULL TEST\n");
	ft_printf(NULL);
	printf("\n");
	ft_printf("Length tests (input <- length):\n");
	printf(" <- printf empty s: %d\n", printf("%s", ""));
	ft_printf(" <- ft_printf empty s: %d\n", ft_printf("%s", ""));
	printf(" <- printf s: %d\n", printf("%s", "Hello how you're doing"));
	ft_printf(" <- ft_printf s: %d\n", ft_printf("%s", "Hello how you're doing"));
	printf(" <- printf d: %d\n", printf("%d", 12345));
	ft_printf(" <- ft_printf d: %d\n", ft_printf("%d", 12345));
	printf(" <- printf i: %d\n", printf("%i", INT_MIN));
	ft_printf(" <- ft_printf i: %d\n", ft_printf("%i", INT_MIN));
	printf(" <- printf i: %d\n", printf("%i", 0));
	ft_printf(" <- ft_printf i: %d\n", ft_printf("%i", 0));
	printf(" <- printf p: %d\n", printf("%p", add));
	ft_printf(" <- ft_printf p: %d\n", ft_printf("%p", add));
	printf(" <- printf p: %d\n", printf("%p", (void *)0));
	ft_printf(" <- ft_printf p: %d\n", ft_printf("%p", (void *)0));
	printf(" <- printf c: %d\n", printf("%c", 'a'));
	ft_printf(" <- ft_printf c: %d\n", ft_printf("%c", 'a'));
	printf(" <- printf x: %d\n", printf("%x", 12345));
	ft_printf(" <- ft_printf x: %d\n", ft_printf("%x", 12345));
	printf(" <- neg printf x: %d\n", printf("%x", -12345));
	ft_printf(" <- neg ft_printf x: %d\n", ft_printf("%x", -12345));
	printf(" <- printf X: %d\n", printf("%X", 12345));
	ft_printf(" <- ft_printf X: %d\n", ft_printf("%X", 12345));
	printf(" <- neg printf X: %d\n", printf("%X", -12345));
	ft_printf(" <- neg ft_printf X: %d\n", ft_printf("%X", -12345));
	printf(" <- printf u: %d\n", printf("%u", 12345));
	ft_printf(" <- ft_printf u: %d\n", ft_printf("%u", 12345));

	ft_printf("\n");
	printf("printf d:\n %d %d %d %d %d\n", -1, 0, INT_MIN, INT_MAX, 010);
	ft_printf("ft_printf d:\n %d %d %d %d %d\n", -1, 0, INT_MIN, INT_MAX, 010);

	ft_printf("\n");
	printf("printf d:\n %i %i %i %i %i\n", -1, 0, INT_MIN, INT_MAX, 010);
	ft_printf("ft_printf d:\n %i %i %i %i %i\n", -1, 0, INT_MIN, INT_MAX, 010);

	ft_printf("\n");
	printf("printf u:\n %u %u %u %u %u\n", -1, -1000, 010, INT_MIN, UINT_MAX);
	ft_printf("ft_printf u:\n %u %u %u %u %u\n", -1, -1000, 010, INT_MIN, UINT_MAX);

	ft_printf("\n");
	printf("printf s\n: %s %s %s\n", "Hello", "1234", "");
	ft_printf("ft_printf s\n: %s %s %s\n", "Hello", "1234", "");
	ft_printf("ft_printf: only one word with s:\n");
	ft_printf("%s", "Hello");
	ft_printf("\n");
	printf("printf: only one word with s:\n");
	printf("%s", "Hello");
	printf("\n");

	ft_printf("\n");
	printf("printf x:\n %x %x %x %x %x %x %x\n", 123456789, 123, -123, -1, 0, INT_MIN, UINT_MAX);
	ft_printf("ft_printf x:\n %x %x %x %x %x %x %x\n", 123456789, 123, -123, -1, 0, INT_MIN, UINT_MAX);

	ft_printf("\n");
	printf("printf X:\n %X %X %X %X %X %X %X\n", 123456789, 123, -123, -1, 0, INT_MIN, UINT_MAX);
	ft_printf("ft_printf X:\n %X %X %X %X %X %X %X\n", 123456789, 123, -123, -1, 0, INT_MIN, UINT_MAX);

	ft_printf("\n");
	printf("printf zero case for all:\n%d %i %x %X %u %p\n", 0, 0, 0, 0, 0, (void *)0);
	ft_printf("ft_printf zero case for all:\n%d %i %x %X %u %p\n", 0, 0, 0, 0, 0, (void *)0);

	ft_printf("\n");
	printf("printf p addressess:\n %p %p\n", add, ptr);
	ft_printf("ft_printf p addressess:\n %p %p\n", add, ptr);
	printf("printf p addressess:\n %p %p\n", add2, ptr2);
	ft_printf("ft_printf p addressess:\n %p %p\n", add2, ptr2);
	printf("printf NULL p:\n %p\n", (void*)NULL);
	ft_printf("ft_printf NULL p:\n %p\n", (void*)NULL);

	ft_printf("\n");
	printf("printf percent: %%\n");
	ft_printf("ft_printf percent: %%\n");

	ft_printf("\n");
	printf("printf mix of specifiers: \n%d %u %s %x %X %p %% %i\n", 123, 123, "Hellohello", 123456789, 123456789, &i, 123456);
	ft_printf("ft_printf mix of specifiers: \n%d %u %s %x %X %p %% %i\n", 123, 123, "Hellohello", 123456789, 123456789, &i, 123456);

	ft_printf("\n");
	printf("printf count: %i\n", printf("Hello it's %dth of %s !\n", 27, "November"));
	ft_printf("ft_printf count: %i\n", ft_printf("Hello it's %dth of %s !\n", 27, "November"));

	ft_printf("\n");
	printf("printf: \nHello, here is an integer: %d, here is another integer: %i, here is a character: %c here is an unsigned int: %u\n"
			"here is a string: %s, here is a lowercase hexadecimal: %x, here is an uppercase hexadecimal: %X,\n"
			"here is a pointer address %p\n",
			d, i, c, u, s, x, X, p);
	ft_printf("ft_printf: \nHello, here is an integer: %d, here is another integer: %i, here is a character: %c here is an unsigned int: %u\n"
			"here is a string: %s, here is a lowercase hexadecimal: %x, here is an uppercase hexadecimal: %X,\n"
			"here is a pointer address %p\n",
			d, i, c, u, s, x, X, p);

	ft_printf("CROSSTESTING\n");

	printf(" <- printf x: %d\n", printf("%x", 12345));
	ft_printf(" <- ft_printf x: %d\n", ft_printf("%x", 12345));

	printf(" <- printf p: %d\n", printf("%p", add));
	ft_printf(" <- ft_printf p: %d\n", ft_printf("%p", add));

	printf(" <- printf c: %d\n", printf("%c", 'a'));
	ft_printf(" <- ft_printf c: %d\n", ft_printf("%c", 'a'));

	printf("printf mix of specifiers: \n%d %u %s %x %X %p %% %i\n", 123, 123, "Hellohello", 123456789, 123456789, &i, 123456);
	ft_printf("ft_printf mix of specifiers: \n%d %u %s %x %X %p %% %i\n", 123, 123, "Hellohello", 123456789, 123456789, &i, 123456);

	printf("printf percent: %%\n");
	ft_printf("ft_printf percent: %%\n");
}
