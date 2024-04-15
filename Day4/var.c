#include<stdio.h>



void main(){

    int x,y,sum;

    const int PASSING_MARKS=75;
    char name[20];

    printf("Enter your name : ");
    scanf("%s",name);
    
    printf("Enter two numbers : \n");
    scanf("%d %d",&x,&y);

    sum=x+y;
    printf("Hi, %s\n\n",name);
    printf("value of sum : %d\n\n",sum);
}