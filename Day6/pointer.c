#include<stdio.h>

void main(){

    int num=20;
    printf("Address of num : %u\n\n",&num);

    //int *prt= &num;
    int *ptr;

    ptr=&num;
    printf("adreess of num: %u\n\n",ptr);
    printf("Value of num :%d\n\n",num);

    printf("Vlaue of Num : %d\n\n",*ptr);

}