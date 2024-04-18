#include<stdio.h>

void main(int argc,char *argv[])
{

    printf("%d\n\n",argc);

   // printf("%s\n\n",argv[0]);

   if( argc >1)
        printf("Hi, %s !!\n\n",argv[1]);
    else
        printf("Username is not provided !! , I can not greet!!....\n\n");

}