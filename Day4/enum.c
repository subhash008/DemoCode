#include<stdio.h>

void main(){




    enum Color { RED, YELLOW, GREEN};  

    enum Color t = RED;

    if(t== 0)
    {
        printf("STOP %d\n\n",t);
    
    }
    else if(t==YELLOW){
        printf("Look");
    }
    else 
    {
        printf("Go");
    }
}