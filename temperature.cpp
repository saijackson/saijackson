#include <stdio.h>
int main()
{
     float tmp;

    printf("Input days temperature : ");
    scanf("%f",&tmp);
   if(tmp>0 && tmp<=10)
             printf("Freezing weather(like antarctica).\n");
   else if(tmp>10 && tmp<=20)
            printf("Very cold weather(mid win).\n");
            else if(tmp>20 && tmp<=30)
                        printf("Cold weather(wintr starting).\n");
                    else if(tmp>30 && tmp<=40)
                               printf("Normal in temp nice.\n");
                            else if(tmp<40)
                                         printf("Its Hot today.\n");
                                    else
                                           printf("Its very hot today.\n");
                                       }

