===================  OPERATORS ========================

Evaluate the expression in a step by step way based on operator precedence and associativity

1) printf("%d\n",1==5==5);
o/p:0
because it will compare from left to right .so (1==5) is 0 and (0==5) is 0.

2) int i =0;
   printf("%d %d",i,i++);
o/p:1 0
because (i++) is postincrement so value will be 0 but i value will be 1.excuting from right to left.

3) int x=5;
   printf("%d %d %d\n",x++,x++,x++);
o/p:7  6   5
because (x++) is postincrement so value will be 5 but x value will be 6.excuting from right to left.

4) int x=2;
   printf("%d   ",++x++);
   printf("%d\n",x++);
o/p:line number 2  is error because lvalue required as increment operand.

5) int k=1;
   printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");
o/p:1==1 is TRUE

6) int i=5;
   i=i++ - --i + ++i;
o/p:i=6;
because it will executing from right to left

7) int a=7;
   a+=a+=a-=6;
   printf("%d\n",a);
o/p:4
because it will execute from right to left.
1. a-6-->7-6=1
2. a+1-->1+1=2
3. a+2-->2+2=4

8) int x=10,y=5,p,q;
   p=x>9;
   q=p||(x=5,y=10);
   printf("%d %d %d\n",q,x,y);
o/p:1 10 5
because p=10>9 is true p=1, 
q=1 ||(x=5,y=10)
so or operation first value is true then it will not check the remaining

9) int x=2,y=1;
   y+=x<<=2;
   printf("%d %d\n",x,y);
o/p:8 9
because line 2 will execute from right to left. 
first x<<=2-->x<<2--> so x is 8.
second y+=x-->y=y+x-->1+8-->so y is 9.

10) int x=2,y=4,z;
    z=y++*x++|y--;
    printf("%d\n",z);
o/p: 13
because multiplication is high precedence y++ * x++-->(4*4)--> 8
y= 5, so z= 8 | 5, z is 13.

11) int a=5,b=6,c=7,d;
    d=a&=b&=c&&a;
    printf("%d\n",d);
o/p:0
it will execute from right to left 

12) int i=10;
    i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;
    printf("%d\n",i);
0/p:4
((10<10)?((10>=10)?((10<=10)?1:2):3):4)

13) int a=10,b=20;
    a=(a>5||b=6?40:50);
    printf("%d\n",a);
o/p:error in b=6
because lvalue required as left operand of assignment

14) printf("%x\n",-1>>4);
    printf("%x\n",-1<<4);
o/P:ffffffff
    fffffff0

15) int x=7;
    x=(x<<=x%2);
    printf("%d\n",x);
o/p:14
because it will execute from right to left.

16) int a=2,b=5,c=1;
    printf("%d\n",(b>=a>=c?1:0));
o/p:1
because it will execute from right to left.

17) int a=5;
    a=a-~a +1;
    printf("%d\n",a);
o/p:12
because it will execute from left to right.

18) a=b=c=1;
    x=--a||++b*(3-1)/2&&b*(--c/3);
    printf("%d\n",x);
o/p:0
because it will execute from right to left.

19) a=10
    b = -5
    c = 2.5
    printf("%d %d",sizeof(a) + sizeof((++b) *c, b);
o/p:8 686847704

20) int i=5;
    i=i++ - i
    printf("%d",i)
o/p:-1

========================================= PREPROCESSORS AND MACROS ===========================

1) What will be the output of the C program?
#include<stdio.h>
#define CONDITION(i)\
printf("preprocessor works\n");                         
int main()
{
	CONDITION(0);
	return 0;
}
o/p:preprocessor works

2) What will be the output of the C program?
#include<stdio.h>
# define loop while(true)
int main()
{
	loop;  
	printf("preprocessor-aptitude");
	return 0;
}
o/p:error
because true undeclared.

3) What will be the output of the C program?
#include<stdio.h>
# define x --5
int main()
{
	printf("%d",x);
	return 0;
}
o/p:error
because lvalue required as decrement oprand

4) What will be the output of the C program ?
#include<stdio.h>
#define sqr(x) ++x * ++x
int main()
{
	int a = 3, z;
	z = ++a * ++a;     
	a -= 3;
	printf("%d %d", sqr(a), z);
	return 0;
}
o/p:16 25
z=5*5 ,so a will be 5
a-=3, so a=2
sqr(2) 4*4=16

5) What will be the output of the C program?
#include<stdio.h>                      
#define x 1+2
int main()
{
	int i;
	i = x * x * x;
	printf("%d",i);
}
o/p:7
because 1+(2 * 1)+(2 * 1)+2=7
 
6) What will be the output of the C program?
#include<stdio.h>
#define a =
int main()
{
	int num a 6;
	printf("%d",num);
	return 0;
}
O/P:6
so here a is replace with = ,so num =6.

7) What will be the output of the C program?
#include<stdio.h>
#define fun(x,y) x*y
int main()
{
	int x = 2, y = 1;
	printf("%d",fun(x + 2, y - 1));
	return 0;
}
o/p:3
because 2+(2*1)-1=3

8) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char DATE[15] = "Current Date";
	printf("%s\n", __DATE__ );
	return 0;
}
o/p:it will present date

9) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char TIME[15] = "Current Time";
	printf("%s\n",__TIME__);
	return 0;
}
o/p:it will print current time.

10) What will be the output of the C program?
#include<stdio.h>
int main()
{	
	printf("Line :%d\n", __LINE__ );
	return 0;
}
o/p:it will print line number.

11) What will be the output of the C program?
#include<stdio.h>
#define  preprocessor_works(x, y)  \
	printf(#x " and " #y " are great!\n")
int main(void) {
	preprocessor_works(you, me);
	return 0;
}
o/p:you and me great!

12) What will be the output of the C program?
#include<stdio.h>
# define puts  "%s C preprocessor"
int main()
{
	printf(puts, puts);
	return 0;
}
o/p:%s C preprocessor  C preprocessor

13) What will be the output of the C program?
#include<stdio.h>
#define preprocessor(n) printf ("macro" #n " = %d", macro##n)
int main(void) {
	int macro25 = 47;
	preprocessor(25);
	return 0;
}
o/p:macro25=47

14) What will be the output of the C program?
#include<stdio.h>
#include<string.h>
#define MACRO(num) ++num 
int main()
{
	char *ptr = "preprocessor";
	int num =strlen(ptr);
	printf("%s  ", MACRO(ptr));
	printf("%d", MACRO(num));
	return 0;
}
o/p:reprocessor 13

15) What will be the output of the C program?
#include<stdio.h>
#define i 10
int main()
{
	#define i 20
	printf("%d",i);
	return 0;
}
o/p:i is redefined ,so 20

16) What will be the output of the C program?
#include<stdio.h>
#define clrscr() 50
int main()
{
	clrscr();
	printf("%d\n",clrscr());
	return 0;
}
o/p:50

17) What will be the output of the C program?
#include<stdio.h>
#define int char
main()
{
	int i=5;
	printf ("sizeof (i) =%d", sizeof (i));
}
o/p:1

18) Write programs to understand the usage of below preprocessor directives.
#include, #if, #ifdef, #ifndef, #else, #elif, #endif, #define, #undef, #line, #error, and #pragma

===================================== TYPEDEF =========================================

1) In the following code, the P2 is Integer Pointer or Integer?
typedef int *ptr;
ptr p1, p2;

o/p:p2  is pointer

2)  In the following code what is 'P'?
typedef char *charp;
const charp P;

o/p:p is pointer to const

3) What is x in the following program?
#include<stdio.h>
int main()
{
    typedef char (*(*arrfptr[3])())[10];
    arrfptr x;
    return 0;
}
o/p:x is invalid initializer

4) What is apfArithmatics in the below statement?
typedef int (*apfArithmatics[3])(int,int); 

o/p:array pointer

5) What is pf in the below statement?
typedef int (*pf)(int);

o/p:function pointer

6) What do the following declarations mean?
typedef char *pc;//char type
typedef pc fpc();//function returing pointer
typedef fpc *pfpc;//
typedef pfpc fpfpc();
typedef fpfpc *pfpfpc;
pfpfpc a[N];

o/p:
7) Write few programs using typedef on structures and enums.