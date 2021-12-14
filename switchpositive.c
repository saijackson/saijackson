#include<stdio.h>
int main()
{
int num;
scanf("%d",&num);
switch(num>0)
{
   case 1:printf("%dit is positive",num);break;
   case 0:
        switch (num<0)
      {
   case 1:printf("%dit is negative",num);break;
   default:printf("%dit is zero",num);
   
}
break;
}
}





