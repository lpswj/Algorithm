#include <math.h>
#include <stdlib.h>
#include "Point.h"

float distance(point a,point b)
{
		float dx = a.x - b.x,dy = a.y - b.y;
		return sqrt(dx*dx + dy*dy);
}

int **malloc2d(int r,int c)
{
		int i;
		int **t = malloc(r * sizeof(int *));
		for(i = 0;i < r;i++)
				t[i] = malloc(c * sizeof(int));
		return t;
}

float randFloat()
{
		return 1.0*rand()/RAND_MAX;
}
