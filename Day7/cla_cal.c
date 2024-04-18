#include<stdio.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{

    printf("%d\n\n",argc);

   // printf("%s\n\n",argv[0]);

   if( argc >3){

        int x= atoi(argv[1]);
        int y=atoi(argv[3]);

        if(*argv[2]=='+')
        {
            printf("Sum : %d\n\n",x+y);

        }
        else if(*argv[2]=='-')
        {
            printf("Sub : %d\n\n",x-y);

        }
        else
        {
            printf(" I can do only + and - !!!!!!\n\n");
        }
   }       
    else
        printf(" Provide the complete expresssion to evaluate!!\n\n");

}


