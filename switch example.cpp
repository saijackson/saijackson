#include<stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	switch(num)
	{
		case 1 : printf("hi");
		break;
		case 2: printf("hello");
		break;
		case 3 : printf("break");
		break;
		default : printf("good morning");
		return(0);
	}
}
