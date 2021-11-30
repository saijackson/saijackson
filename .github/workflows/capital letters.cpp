#include<stdio.h>
int main()
{ char upp,low;
  int ascii;
  printf("enter the upper case letters");
  scanf("%c",&upp);
  ascii=upp+32;
  printf("%c",ascii);
  return(0);
}
