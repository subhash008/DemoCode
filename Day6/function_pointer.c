#include<stdio.h>

int add(int x, int y){
    return (x+y);
}

int sub(int x, int y){
    return(x-y);
}



void main(){

    int  (*fp)(int,int);

    fp=add;

    int result = fp(30,40);

    printf("%d\n\n",result);

    fp=sub;
    result = fp(30,40);

    printf("%d\n\n",result);


}