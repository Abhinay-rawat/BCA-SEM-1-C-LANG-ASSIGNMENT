#include<stdio.h>
int main ()
{
	int a ;
	int b;
	
	printf("enter a number a:\n");
	scanf("%d" , &a);
		
	printf("enter a number b:\n");
	scanf("%d" , &b);
	
  (a>b) ? printf("a is the greatest number") : printf("b is the greates number");
	return 0;
}
