
/*
    demo of pointer to pointer 

*/

#include<stdio.h>

void main(){

    int num=20;
    printf("Address of num : %u\n\n",&num);

    //int *prt= &num;
    int *ptr;

    ptr=&num;

    printf("Address of ptr : %u\n\n",&ptr);

    int **pp;
    pp=&ptr;

    printf("Value of PP: %u same as address of ptr: %u\n\n",pp,&ptr);

    printf("Value at *pp : %u same as ptr: %u same as the address of num: %u\n\n",*pp,ptr,&num);
    
    printf("Value of num : %d using *ptr: %d  using **pp:%d\n\n",num,*ptr,**pp);
    /*
    printf("adreess of num: %u\n\n",ptr);
    printf("Value of num :%d\n\n",num);

    printf("Vlaue of Num : %d\n\n",*ptr);
    */
   

}