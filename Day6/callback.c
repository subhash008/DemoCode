#include<stdio.h>

int add(int x, int y){
    return (x+y);
}

int sub(int x, int y){
    return(x-y);
}

int cal(  int (*fp)(int,int)   ,   int x, int y){
 
    return fp(x,y);

}

void main(){

    int result = cal(add,55,40);

    printf("%d\n\n",result);

    result =cal(sub,40,30);

    printf("%d\n\n",result);





}