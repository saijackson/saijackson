#include<stdio.h>
int main()
{
	int a,b;
	float q;
	printf("Enter the values:");
	scanf("%d %d",&a,&b);
	q=b/a;
	
	int r = a - (a/b)*b;
	printf("%d",r);
	printf("%f",q);
	

}
