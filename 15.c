#include <stdio.h>

int main() {
    int a,b,c,ap,aq,bp,bq,cp,cq,d,t;
   
   
    printf("enter the item no.");
    scanf("%d",&a);
   
    printf("enter the quantity");
    scanf("%d",&aq);
   
    printf("enter the price");
    scanf("%d",&ap);
   
    printf("enter the item no.");
    scanf("%d",&b);
   
    printf("enter the quantity");
    scanf("%d",&bq);
   
    printf("enter the price");
    scanf("%d",&bp);
   
     printf("enter the item no.");
    scanf("%d",&c);
   
    printf("enter the quantity");
    scanf("%d",&cq);
   
    printf("enter the price");
    scanf("%d",&cp);
   
    printf("item no.   quantity   price   total\n ");
   
    printf(" %d          %d       %d      %d\n ", a,aq,ap, aq*ap);
   
    printf(" %d          %d       %d      %d\n ", b,bq,bp, bq*bp);

    printf(" %d          %d       %d      %d\n", c,cq,cp, cq*cp);

    t=(aq*ap)+(bq*bp)+(cq*cp);
    
    d=t*0.10;
    
    printf("total amount is %d\n",t);
    
    printf("total amount is %d\n",d);
    
    printf("total amount is %d\n",t-d);

    return 0;
}
