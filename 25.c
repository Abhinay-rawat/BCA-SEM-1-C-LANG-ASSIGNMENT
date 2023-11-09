#include<stdio.h>

int main ()
{
    int a , n  , p , i ;
    printf("enter the value of a : \n");
    scanf("%d" , &a);
 
    printf("enter the power of a :");
    scanf("%d" , &n);
    
    p=1;
    i=0;
    while(i<n){
        p *=a;
        i++;
    }
    printf("\nx^n =%d" , p);
    return 0;
}