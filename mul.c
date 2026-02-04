#include<stdio.h>

int main()
{	
	int a, b;
	char ch;
	printf("Enter the '*' operator\n");
	scanf("%c", &ch);

	printf("Enter the two number for multiplication\n");
	scanf("%d %d",&a,&b);


	 if(ch == '*')
	{
		printf("RESULT = %d", a*b);
	}
	else 
	{
		printf("INVALID operator");
	}
	
	return 0;
	
}
