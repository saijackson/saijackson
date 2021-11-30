#include<stdio.h>
#include<math.h>
int main()
{ float a,p,t,r,si,ci;
  printf("enter the values of p,t and r");
  scanf("%f%f%f",&p,&t,&r);
  si=(p*t*r)/100;
  a=p*(pow((1+r/100),t));
  ci=a-p;
  printf("%f\n%f\n%f\n",si,a,ci);
  return(0);
}
