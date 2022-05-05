#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("=====%%c 형======\n");
	int z =  ft_printf("abc %c ada\n%c da d\n", '1', '2');
	printf("%d\n\n", z);
	int y =  printf("abc %c ada\n%c da d\n", '1', '2');
	printf("%d\n", y);

	printf("=====%%s 형======\n");
	int a =  ft_printf("abc %s ada\n%s da d\n", "123","456");
	printf("%d\n\n", a);
	int b =  printf("abc %s ada\n%s da d\n", "123","456");
	printf("%d\n", b);
	int n =  ft_printf(" NULL %s NULL \n", NULL);
	printf("%d\n", n);
	// int o =  printf(" NULL %s NULL \n", NULL);
	// printf("%d\n", o);
	
	printf("=====%% 형======\n");
	int c =  ft_printf("abc %s ad%%a\n%s da d\n", "123","456");
	printf("%d\n", c);
	int d =  printf("abc %s ad%%a\n%s da d\n", "123","456");
	printf("%d\n", d);

	printf("=====%%d 형======\n");
	int e =  ft_printf("%d\n", 2147483647);
	printf("%d\n", e);
	int f =  printf("%d\n", 2147483647);
	printf("%d\n", f);
	int g =  ft_printf("%d\n", -2147483647);
	printf("%d\n", g);
	int h =  printf("%d\n", -2147483647);
	printf("%d\n\n", h);

	printf("=====%%i 형======\n");
	int i =  ft_printf("%i\n", 2147483647);
	printf("%d\n", i);
	int j =  ft_printf("%i\n", -2147483647);
	printf("%d\n", j);
	int k =  ft_printf("%i\n", -2147483647);
	printf("%d\n\n", k);

	printf("===== %%u ======\n");
	// ft_printf("%u\n", -1);
	// ft_printf("%u\n", -2);  //4294967294
	// ft_printf("%u\n", -4294967294); //2
	// ft_printf("%u\n", -4294967295); //1
	// ft_printf("%u\n", 4294967296); //0
	// ft_printf("%u\n", 4294967297); //1
	// ft_printf("%u\n", 4294967298); //2

	// printf("%u\n", -1);  //4294967295
	// printf("%u\n", -2);  //4294967294
	// printf("%u\n", -4294967294); //2
	// printf("%u\n", -4294967295); //1
	// printf("%u\n", 4294967296); //0
	// printf("%u\n", 4294967297); //1
	// printf("%u\n", 4294967298); //2

	printf("===== mix ======\n");
	int l =  ft_printf("%s%c%% f%dad\n", "123", 'd', 2147483647);
	printf("%d\n", l);
	int m =  printf("%s%c%% f%dad\n", "123", 'd',2147483647);
	printf("%d\n\n", m);

	printf("===== %%xX ======\n");
	unsigned int q = 123456;
	int ab = printf("%X\n\n", q);
	printf("%d\n", ab);
	int ac = ft_printf("%X\n\n", q);
	printf("%d\n", ac);
	int bc = printf("%x\n\n", q);
	printf("%d\n", bc);
	int cb = ft_printf("%x\n\n", q);
	printf("%d\n", cb);


	printf("===== %%p ======\n");
	unsigned int ma = 123456;
	printf("%p\n\n", &ma);
	printf("%d\n\n", ma);
	printf("%x\n\n", &ma);

	ft_printf("%p\n\n", &ma);
	ft_printf("%d\n\n", ma);
	ft_printf("%x\n\n", &ma);

	return (0);
}
