#include<stdio.h>
main()
{
	char upp,low,ascii;
	printf("enter the low letters");
	scanf("%c",&low);
	ascii=low-32;
	printf("%c",ascii);
	return(0);
}
