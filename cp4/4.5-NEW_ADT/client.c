#include <stdio.h>
#include "UF.h"

main(int argc,char *argv[])
{
		int p,q, N = atoi(argv[1]);
		UFinit(N);

/*		
		while(scanf("%d %d",&p,&q) == 2)

				if(!UFfind(p,q))
				{
						UFunion(p,q);
						printf("%d %d\n",p,q);
				}					
*/
		while(scanf("%d %d",&p,&q) == 2)
				if(UFunion(p,q))
						printf("%d %d\n",p,q);
		printf("%d\n",UFnum(2));
				
	

}
