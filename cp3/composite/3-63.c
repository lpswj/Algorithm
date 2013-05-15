//3D array memory allocate
int ***malloc3d(int x,int y,int z)
{
		int i,j;
		int ***t = malloc(x * sizeof(int **));
		for(i = 0;i < m;i++)
				t[i] = malloc(y * sizeof(int *));
		for(i = 0;i < y;i++)
				for(j = 0;j < z;j++)
						t[i][j] = malloc(z * sizeof(int));
}
