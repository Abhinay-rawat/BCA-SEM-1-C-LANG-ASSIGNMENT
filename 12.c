#include<stdio.h>
#define PI 3.14

int main()
{
    float r ;
     printf("ABHINAY SINGH RAWAT \n 1-B \n 321\n");
     
     printf("enter the radius :\n ");
     scanf("%f" , &r);

     float area = PI*r*r;
     float perimeter  = 2*PI*r;

     printf("the perimeter is :%f \n " , area);
     printf("the area is : %f \n " , perimeter);
    
    return  0;
}