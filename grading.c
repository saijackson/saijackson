#include<stdio.h>
int main()
{
char a;
printf("enter the grade: ");
scanf("%c",&a);
if(a=='E' || a=='e')
{
printf ("Excellent");
}
else if (a=='V' || a=='v')
{
printf ("VERY GOOD");	
}
else if (a=='G' || a=='g')
{
	printf ("GOOD");
}
else if (a=='A' || a=='a')
{
	printf ("average");
}
else if (a=='F' || a=='f')
{
	printf("fail");
}
}



