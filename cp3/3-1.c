#include <stdio.h>
#include <limits.h>
#include <float.h>

main()
{
		int min,max,test;
		min = (int)(1<<(sizeof(int)*8-1));
		printf("the int min number is %d\n",min);
		max = ~min;
		printf("the int max number is %d\n",max);

		min = (long int)(1<<(sizeof(long int)*8-1));
		printf("the long int min number is %d\n",min);
		max = ~min;
		printf("the long int max number is %d\n",max);

		min = (short int)(1<<(sizeof(short int)*8-1));
		printf("the short int min number is %d\n",min);
		max = ~min;
		printf("the short int max number is %d\n",max);

		printf("the float min number is %g\n",FLT_MAX);
		printf("the float max number is %g\n",FLT_MIN);

		printf("the double min number is %g\n",DBL_MAX);
		printf("the double int max number is %g\n",DBL_MIN);
}
