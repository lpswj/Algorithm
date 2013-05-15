#include <stdio.h>
#include "Item.h"
#include "QUEUE.h"

main()
{
		char t;
		QUEUEinit(3);

		while(scanf("%c",&t) == 1)
		{
				if(t != '*')
						QUEUEput(t);
				else
						printf("%c ",QUEUEget());
		}
		return 1;
}

