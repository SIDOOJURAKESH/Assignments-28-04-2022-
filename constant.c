#include <stdio.h>
const int a=10; // hear a will strores in the data segement read only section
int main()
{
	const int c=100; // c will stores in the stack segement read only section
	a=50;
	c=40;
	printf("%d\n%d\n",a,c);
	return 0;
}