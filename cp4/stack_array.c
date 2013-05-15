#include <stdlib.h>
#include "Item.h"
#include "STACK.h"
static Item *s;
static int N;

void STACKinit(int maxN)
{
		s = malloc(maxN * sizeof(Item));
		N = 0;
}

int STACKempty()
{
		return N == 0;
}

void STACKpush(Item item)
{
		if((N+1) == STACKsize())
				STACKerror();
		else
				s[N++] = item;
}

Item STACKpop()
{
		if(N == 0)
				STACKerror();
		else
				return s[--N];
}

int STACKsize()
{
		return N - 1;
}

void STACKerror()
{
		printf("Stack error!\n");
}
