#include<stdio.h>

void fun(){
    static int count =0;
    ++count;
    printf("Function is called %d times\n\n",count);

}
void main(){

    volatile int y=10;

    fun();
    fun();
    fun();
    printf("%d\n",y);
}