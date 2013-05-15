#include <stdio.h>
#include <string.h>
#include "Item.h"
#include "STACK.h"

main(int argc,char *argv[])
{
<<<<<<< HEAD
		char *a = argv[1];
		int i,N = strlen(a);
		STACKinit(N);
		for(i = 0;i < N;i++)
=======
		//sth wrong with it !
		char *a = "5 9 8 + 4 6 * * 7 + *";
		int i, n = strlen(a);
		STACKinit(n);
		Item op2;
		
		for(i = 0;i < n;i++)
>>>>>>> office
		{
				if(a[i] == '+')
						STACKpush(STACKpop() + STACKpop());
				if(a[i] == '*')
						STACKpush(STACKpop() * STACKpop());
<<<<<<< HEAD
				if((a[i] <= '0') && (a[i] >= '9'))
						STACKpush(0);
				while((a[i] >= '0') && (a[i] <= '9'))
						STACKpush(10*STACKpop() + (a[i++] - '0'));
=======
				if(a[i] == '-')
				{
						op2 = STACKpop();
						STACKpush(STACKpop() - op2);
				}
				if(a[i] == '/')
				{
						op2 = STACKpop();
						if(op2 != 0)
								STACKpush(STACKpop() / op2);
						else
								printf("error:zero divisor\n");
				}
//				if((a[i] >= '0') && (a[i] <= '9'))
//						STACKpush(0);
				while((a[i] >= '0') && (a[i] <= '9'))
						STACKpush(a[i++]-'0');
>>>>>>> office
		}
		printf("%d \n",STACKpop());
}
