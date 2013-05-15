#include <stdio.h>

int strlen(char *a)
{
		int i;
		for(i = 0;a[i] != '\0';i++)
				;
		return i;
}

void strcpy(char *a,char *b)
{
		int i;
		for(i = 0;(a[i]=b[i]) != 0;i++)
				;
}

int strcmp(char *a,char *b)
{
		int i;
		for(i = 0;a[i] == b[i];i++)
				if(a[i] == 0) return 0;
		return a[i]-b[i];
}

/*
int strncmp(char *a,char *b,strlen(a))
{

}
*/

void strcat(char *a,char *b)
{

}


main()
{
		char t[] = "apple a day,keep doctor away";
		char s[] = "a apple a day,keep doctor away";
		printf("%d",strcmp(t,s));

}
