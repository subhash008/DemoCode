#include<stdio.h>

void main(){


    for(int i=1; i<6; i++){

       for(int j=1; j<=i; j++){

            //printf("i=%d  j=%d || ",i,j);
            printf("%d",j);
       } 
       printf("\n");
    }
    //printf("---------------------------------------------\n");
    for(int i=5; i>0; i--){
      if(i==5){
         continue;
      }

       for(int j=1; j<=i; j++){

            //printf("i=%d  j=%d || ",i,j);
            printf("%d",j);
       } 
       printf("\n");
    }
}