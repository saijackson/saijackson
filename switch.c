#include<stdio.h>
main(){
	int num, p;
	printf("enter a number ");
	scanf("%d",&num);
	p = num %2 ;
	switch (p)
	{
		case 0: printf("it is even");
		                break;
		default :
			printf("it is odd value");
			break;
	}
	
}
