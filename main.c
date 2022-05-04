#include "ft_printf.h"
#include <stdio.h>
// #include <stdarg.h>
// #include <unistd.h>
// #include <stdlib.h>

// int	sum(int num, ...)
// {
// 	va_list ap;
// 	int		arg;
// 	int		result;
// 	int		i;

// 	arg = 0;
// 	result = 0;
// 	i = 0;
// 	va_start(ap, num);	//ap가 num의 맨 첫번째 가변인수를 가르키게 초기화
// 	while (i < num)
// 	{
// 		arg = va_arg(ap, int);  //int 사이즈 만큼 이동
// 		result += arg;
// 		i++;
// 	}
// 	va_end(ap);  //가변인자 사용 종료
// 	return (result);
// }

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
	int i =  printf("%i\n", 2147483647);
	printf("%d\n", i);
	int j =  printf("%i\n", -2147483647);
	printf("%d\n", j);
	int k =  printf("%i\n", -2147483647);
	printf("%d\n\n", k);

	printf("===== test ======\n");
	int l =  ft_printf("%s%c%% f%dad\n", "123", 'd', 2147483647);
	printf("%d\n", l);
	int m =  printf("%s%c%% f%dad\n", "123", 'd',2147483647);
	printf("%d\n\n", m);

	ft_printf("%u\n", -1);
	ft_printf("%u\n", -2);  //4294967294
	ft_printf("%u\n", -4294967294); //2
	ft_printf("%u\n", -4294967295); //1
	ft_printf("%u\n", 4294967296); //0
	ft_printf("%u\n", 4294967297); //1
	ft_printf("%u\n", 4294967298); //2

	printf("%u\n", -1);  //4294967295
	printf("%u\n", -2);  //4294967294
	printf("%u\n", -4294967294); //2
	printf("%u\n", -4294967295); //1
	printf("%u\n", 4294967296); //0
	printf("%u\n", 4294967297); //1
	printf("%u\n", 4294967298); //2

	
	return (0);
}
