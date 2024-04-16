#include<stdio.h>

void main(){

    int n=7;

    if(n%2==0){

        printf("condition is true\n\n");

        if(n%5==0){
            printf("The number is even and multiple of five\n\n");
        }
        else
            printf("Number is even but not multiple of 5\n\n");

    }
    else{
        printf("Number is odd ");
        if(n%5==0){
            printf("and multiple of five\n\n");
        }
    }
        
   
}