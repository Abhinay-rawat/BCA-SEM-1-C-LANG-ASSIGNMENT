#include<stdio.h>
int main ()
{
	int a ;
	int b;
	int c;	
	printf("enter a number a \n :");
	scanf("%d" , &a);
    
   	printf("enter a number b \n :");
    scanf("%d" , &b);
    
    printf("enter a number c \n :");
    scanf("%d" , &c);
    
    if (a>b)
    {
	if (a>c){
		printf("A is the greatest number");
		} else {
			printf("C is the greatest number ");\
		}
	} 
	 else if(b>c)
	 {
		if (b>a){
		printf("B is the greatest number");
    }}
	else {
	printf("c is the greatest number");
}
	return 0;
}






