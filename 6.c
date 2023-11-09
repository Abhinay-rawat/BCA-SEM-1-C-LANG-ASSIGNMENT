#include<stdio.h>
#define ROI 7

int main()
    {
   float p , t ;

   printf("ABHINAY SINGH RAWAT \n 1B \n cet - 321\n");

   printf("enter value of p ;\n");
   scanf("%f" , &p);
    
   printf("enter value of t : \n" );
   scanf("%f" , &t);

  float intrest = (p*ROI*t) /100;
  printf("\n SI= %.2f" , intrest);
  return 0;
    }
