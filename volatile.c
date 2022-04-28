#include <stdio.h>

int main()
{
	int a=10;
	volatile int x=10;
	printf("%d,%d,%d\n",++x,++x,++x); // using with volatile
	printf("%d,%d,%d\n",++a,++a,++a); // without using volatile
	return 0;
}