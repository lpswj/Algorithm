#include <stdio.h>
#include <stdlib.h>
#include "Item.h"
#include "DQUEUE.h"

main()
{
		char t;
		DQUEUEinit(10);

		while(scanf("%c",&t) == 1)
		{
				if(isupper(t))
						DQpush_front(t);
				else if(islower(t))
						DQpush_back(t);
				else if(t == '+')
						printf("%c",DQpop_front());
				else if(t == '*')
						printf("%c",DQpop_back());
		}
		return 1;

}
