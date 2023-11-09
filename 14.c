//14.Mathematical operation on character to get other character
#include<stdio.h>

int main(){
    char a , b , sum , diff , product , quotient;
    printf("Enter two letters: ");
    scanf("%c %c",&a,&b);
    //sum
    sum=a+b;
    printf("The ASCII equivalent for the sum of a and b is %c\n" , sum);
    //difference 
    diff=a-b;
    printf("The ASCII equivalent for the difference of a and b is %c\n",diff);
    //product
    product=a*b;
    printf("The ASCII equivalent for the product of a and b is %c\n",product);
    //division
    quotient=a/b;
    printf("The ASCII equivalent for the quotient  of a and b is %c\n", quotient ); 
    
    return 0;
    
}