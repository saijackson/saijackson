#include<stdio.h>
int main()
{ int age;
  printf("enter the value of age");
  scanf("%d",&age);
  if(age>=18)
  { printf("eligible to vote");
  }
  else
  { printf("not eligible to vote");
  }
  return(0);
}
