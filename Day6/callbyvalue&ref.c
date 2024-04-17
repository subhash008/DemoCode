#include<stdio.h>

void call_by_val(int a){

    printf("Inside fun and value of a is befor assignment : %d\n\n",a);
    a=10;
    printf("Inside fun and value of a is : %d\n\n",a);
}

void call_by_ref(int *a){

   printf("Inside fun and value of a is : %d\n\n",*a);

    *a=10;

}

void main(){

    int a;
    a=50;
    /*
    call_by_val(a);

    printf("inside Main and value of a after function call : %d\n\n",a);
    */
   call_by_ref(&a);

   printf("inside Main and value of a after function call : %d\n\n",a);


}