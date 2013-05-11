#include <stdio.h>
#include "Num.h"

main()
{
		float p[6],S;
		triangle tr1; 

		
		randNum2(p,tr1);
		S = tri_area(tr1);
		printf("the area of tr1 is %f\n",S);
		return 0;
}
