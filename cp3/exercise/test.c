#include <stdio.h>

main()
{
		int a[10],i;

		for(i = 0;i<10;i++)
				a[i] = i;

		int *head,*u;

		head = a;
		u = a;
		u++;
		printf("%d",*head);
		printf("%d",*u);


}
