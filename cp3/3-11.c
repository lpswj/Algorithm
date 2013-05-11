#include <stdio.h>

main()
{
		int a[99],i;
		for(i = 0 ;i < 99;i++)
				a[i] = 98 - i;
		for(i = 0 ;i < 99;i++)
				a[i] = a[a[i]];
		for(i = 0 ;i < 99;i++)
				printf("%2d ",a[i]);
		printf("\n");
}
