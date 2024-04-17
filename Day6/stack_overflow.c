#include<stdio.h>

void demo(){

    overflow();
}
void overflow(){

    
    static count=1;
    int x[1000];
    printf("%d\n",count);
    count++;

    if(count == 10000){
        return;
    }
    demo();
}

void main(){

    overflow();
}