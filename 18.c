#include<stdio.h.>

int main()
{
	int a ;
	int b;
		
	printf("enter a number a \n :");
	scanf("%d" , &a);
    
   	printf("enter a number b \n :");
    scanf("%d" , &b);
    
    if (a>b)
    {
		printf("A is the greatest number");
	} 
	 else {
		printf("B is the greatest number");
	}
	return 0;
}
