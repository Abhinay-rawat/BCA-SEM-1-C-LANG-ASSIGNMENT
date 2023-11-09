#include<stdio.h>

 int main()
 {
    float a ;

    printf("enter the electricity consumption ;\n");
    scanf("%f" , &a);

    if (a>0 && a<200){
        printf("the electricity charge is : %f" , a*0.50);
    }    
     else if(a>201 && a<400) {
     printf("the electricity charge is : %f" , 100+ 0.65*(a-200) );
   }
     else if(a>401 && a<600) {
     printf("the electricity charge is : %f" , 230+ 0.80*(a-400) );
   }
     else if(a>601) {
     printf("the electricity charge is : %f" , 390+ 1*(a-600) );
     }
    return 0;
 }