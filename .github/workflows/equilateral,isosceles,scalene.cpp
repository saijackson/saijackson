#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter the values of a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  if (a==b&&b==c)
  {
    printf("equilateral");
  }
  else if(a==b ||b==c || c==a)
 {
    printf("isosceles");
  }
  else
  {
    printf("scalene");
  }
  return(0);
}
