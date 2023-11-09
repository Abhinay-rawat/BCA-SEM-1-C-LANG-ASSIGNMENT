#include<stdio.h>

int main()
    {
   int a , b , c , d, e;
   
   printf("ABHINAY SINGH RAWAT \n 1B \n cet - 321\n");
   printf("enter the number a: \n ");
   scanf("%d", &a);

   printf("enter the number b:\n" );
  scanf("%d" , &b);
  
  printf("enter the number c:\n" );
  scanf("%d" , &c);
  
  printf("enter the number d:\n" );
  scanf("%d" , &d);
  
  printf("enter the number e:\n" );
  scanf("%d" , &e);
  
  int sum = a+b;

  printf("the sum  is :%d \n" , sum);
 
  int average = (a+b+c+d+e)/5;

  printf("the average is :%d" , average);

  return 0;
    }
