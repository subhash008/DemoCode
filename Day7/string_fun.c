
#include<stdio.h>



void concat(char des[],char src[]){

    int i,j=0;

    for(i=0;des[i]!='\0';i++);

    //printf("%d\n\n",i);
    for(j=0; src[i]!='\0';j++,i++){
        des[i]=src[j];
    }
    des[i]='\0';
}
void main()
{
    char name[]="Subhash ";
    char lname[]="Joshi";
    concat(name,lname);
    printf("Full Name : %s\n\n",name);
    
}