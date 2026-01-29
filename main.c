#include<stdio.h>


int main()
{

	int a, b;
	char op;

	printf("Enter '+' or '-' or '/'  operator\n");

	scanf("%c",&op);
	
	
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	
	if(op == '+')
	{
		printf("\nResult = %d\n", a+b);
	}
	else if(op == '-')
	{
		printf("\nResult = %d\n", a-b);
	}
	else if(op == '/')
	{
		if(b != 0)
			printf("\nResult = %d\n", a / b);
		else
			printf("\nError !,Division by zero.\n");
	}
	else
	{
		printf("Invalid operator");
        }

	return 0;

}
