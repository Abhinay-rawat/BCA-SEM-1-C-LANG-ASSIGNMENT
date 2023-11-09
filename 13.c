#include<stdio.h>

int main()
{
	char character ;
	int asciivalue;
	
    printf("ABHINAY SINGH RAWAT \n 1-B \n 321 \n");
    
	printf("enter a character \n");
	scanf("%c" , &character);
	
	asciivalue = (int)character;
	printf ("ASCII value +5 : %d \n " , asciivalue +5);
	printf ("ASCII value -5 : %d \n" , asciivalue -5);
	printf ("ASCII value *2 : %d \n" , asciivalue *2);
	printf ("ASCII value /2 : %d \n" , asciivalue /2);
	
	return 0;
}
