#include <stdio.h>
#define add(x,y) x+y
#define mul(x,y) x*y
int main()
{
	int a=10,b=20;
	printf("%d\n",add(a,b));
	printf("%d\n",mul(a,b));
	return 0;
}