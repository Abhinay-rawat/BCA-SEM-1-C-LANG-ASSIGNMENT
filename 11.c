#include<stdio.h>

int main()
{
    float l ,b ;

    printf("ABHINAY SINGH RAWAT \n 1-B\n 321\n");

    printf("enter the length in cm:\n");
    scanf("%f" ,&l );

    printf("enter the breadth in cm:\n");
    scanf("%f" , &b);

    float area = l*b;
    float perimeter =2*(l+b);

    printf("the area is : %.2f" ,area );
    printf("the perimeter is : %.2f" , perimeter);
    return 0;
}