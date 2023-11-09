#include <stdio.h>
int main()
{
	int marks;

	printf("enter the marks \n");
	scanf("%d", &marks);

    if(marks>80 && marks<100)
	{
	printf("honours");
	} else if (marks>60 && marks<79)
	{
		printf("first division");
	}	else if (marks>50 && marks<59)
	{
		printf("second division");
	} else if (marks>40 && marks<49)
	{
		printf("third division");
	} else if (marks>0 && marks<39)
	{
		printf("fail");
	}
	else
	{
		printf("NOT ATTEMPTED");
	}
	return 0;
}
