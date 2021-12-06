#include<stdio.h>
int main()
{
	int marks1,marks2,marks3,marks4,marks5;
	float percentage;
	scanf("%d",&marks1);
	scanf("%d",&marks2);
	scanf("%d",&marks3);
	scanf("%d",&marks4);
	scanf("%d",&marks5);
	percentage=(marks1+marks2+marks3+marks4+marks5)/5*100;
{
		if(percentage>90)
	{
		printf("grade is A");
	}
   else if(percentage>80)
   {
   	printf("grade is B");
   }
   else if(percentage>70 )
   {
   	printf("grade is C");
   }
   else if(percentage>40)
   {
   	printf("grade is D");
   }
   else 
   {
   	printf("grade is E");
   }
   return(0);
	}	
}
