#include<stdio.h>

void main(){


    long int inc=1300000;
    int tax;

    if(inc<=600000){
        tax=0;
    }
    else if(inc <=900000){
        tax=(inc-600000)*10/100;
    }
    else if(inc<=1200000){
        tax=30000+((inc-900000)*15/100);
    }
    else{
        tax=75000+ ((inc-1200000)*20/100);
    }
    printf("you need to pay Rs. %d on your inc as tax\n\n ",tax);
}