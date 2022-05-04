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
	
	printf("=====%% 형======\n");
	int c =  ft_printf("abc %s ad%%a\n%s da d\n", "123","456");
	printf("%d\n\n", c);
	int d =  printf("abc %s ad%%a\n%s da d\n", "123","456");
	printf("%d\n", d);

	printf("=====%%d 형======\n");
	ft_printf("%d\n", 2147483647);
	printf("%d\n", 2147483647);
	ft_printf("%d\n", -2147483648);
	printf("%d\n", -2147483648);

	printf("===== test ======\n");
	ft_printf("%s%c%%\n", "123", 'd');
	printf("%s%c%%\n", "123", 'd');

	
	return (0);
}
