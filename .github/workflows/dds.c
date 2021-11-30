#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && a==c)
	{
		printf("equilateral triangle");
	}
	else if (a==b || b==c || a==c)
	{
		printf("isosceles triangle");
	}
	else
	{
	printf("scalen triangle");
    }
    return(0);
    
}
