#include<stdio.h>

int add(int x, int y){
    return (x+y);
}

int sub(int x, int y){
    return(x-y);
}

int div(int x, int y){
    return x/y;
}

int cal(  int (*fp)(int,int)   ,   int x, int y){

    printf("doing somthing , and i will take long time doing that;");
 
    int r= fp(x,y);

    return (r);

}

void main(){

    int result = cal(add,55,40);

    // int result = add(55,40);

    printf("%d\n\n",result);

    result =cal(sub,40,30);

    printf("%d\n\n",result);

    result =cal(div,60,3);

    printf("%d\n\n",result);






}