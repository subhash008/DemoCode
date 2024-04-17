#include<stdio.h>

int fact(int n){

    if(n==0){
        printf("Returning Start!!!\n\n");
        return 1;
    }
    printf("%d * fact(%d)\n",n,n-1);
    int f=n*fact(n-1);
    printf("returning f=  %d\n",f);
    return f;
}

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int f=fact(n);

    printf("Factorial of the number is :%d\n\n",f);
}