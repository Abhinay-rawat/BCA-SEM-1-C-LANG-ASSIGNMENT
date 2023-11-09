#include<stdio.h>

int main ()
    {
      int a , b ,c , discriminant ;

      printf("enter the coefficient a :\n" );
      scanf("%d" , &a );

      printf("enter the coefficient b :\n" );
      scanf("%d" , &b );
      
      printf("enter the coefficient c :\n" );
      scanf("%d" , &c );

      discriminant = b*b -(4*a*c);
     
     if(discriminant<0){
        printf("NOT REAL");
     }

    else if(discriminant==0){
        printf("REAL AND EQUAL");
    }
    else {
         printf("REAL ROOT");
        }
      return 0;
    }