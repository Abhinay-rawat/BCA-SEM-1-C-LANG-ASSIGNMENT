#include<stdio.h>

int main()
{
    int a , b;
    int operation;

    printf("ABHINAY SINGH RAWAT \n 1-B\n 321\n");

    printf("enter a number a :\n");
    scanf("%d" ,&a);
     
    printf("enter a number b :\n ");
    scanf("%d" , &b);
     
    printf("1.ADDITION \n 2.SUBTRACTION\n 3.MULTIPLICATION\n 4.DIVISION\n 5. REMAINDER\n ");

    printf("ENTER YOUR OPERATION\n");
    scanf("%d" , &operation);

    switch (operation)
    {
    case 1  :
        printf("the sum of a and b is : %d" , a+b );
        break;
    
    case 2 :
        printf("the diffrence of a and b is : %d" , a-b);
        break;
    
    case 3 :
        printf("the multiplication of a and b is :%d" , a*b);
        break;
    
    case 4 :
    printf("the division of a and b is  :%d" , a/b);
    break;

    case 5 :
    printf("the remainder of a and b :%d" , a%b);
    break;
    
    default:
    printf("enter a correct choice");
    break;
    }
    return  0;
}