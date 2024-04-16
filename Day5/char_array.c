#include<stdio.h>

void main(){

    char name[]="subhash joshi";

    for(int i=0; name[i]!=' ';i++){

            name[i]= name [i]-32;

    }

    printf("name is : %s\n\n",name);

   

        




}