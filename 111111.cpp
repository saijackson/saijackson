#include<stdio.h> 
main() 
{ float a,b,c; 
scanf("%f%f%f",&a,&b,&c); 
if(b*b-4*a*c>0) 
{ 
printf("roots are real"); 
} else if(b*b-4*a*c==0) 
{ printf("roots are equal"); 
} else { 
printf ("roots are imaginary"); 
} }
