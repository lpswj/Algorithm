#include <stdio.h>

int  print1(void);
int  print2(void);
int  print3(void);

int main()
{
		int (*print)(void);
		int result;
		print = print2;
		(*print)();
}

int print1(void)
{
		printf("1\n");
		return 1;
}

int print2(void)
{
		printf("2\n");
		return 2;
}

int print3(void)
{
		printf("3\n");
		return 3;
}
