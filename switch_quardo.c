#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,d;
	float x1,x2;
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	x1=(float)((-b+pow(d,0.5))/(2*a));
	x2=(float)((-b-pow(d,0.5))/(2*a));
	switch(d>0)
	{
		case 1: printf("The roots are %f and %f",x1,x2);break;
		case 0: switch(d==0)
	            {
		          case 1: printf("The roots are equal= %f",x1);break;
	              case 0: printf("The roots are imaginary");
	            }
		 }  
    }
