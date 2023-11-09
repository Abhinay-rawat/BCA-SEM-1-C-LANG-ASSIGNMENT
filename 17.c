#include<stdio.h>
int main ()
{
	int a ;
	int b;
	int c;
	printf("enter a number a:\n");
	scanf("%d" , &a);
		
	printf("enter a number b:\n");
	scanf("%d" , &b);
	
	printf("enter a number c:\n");
	scanf("%d" , &c);

   int greatest =  (a>b)? (a>c?a:c) : (b>c?b:c);
   printf("the greatest number is : %d" , greatest );
	return 0;
}
