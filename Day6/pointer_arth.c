#include<stdio.h>
void main(){

    char ch="a";
    char *cpt=&ch;

    printf("%u\n\n",cpt);
    printf("%u\n\n",(cpt+1));

    long int lx=545464564645;
    long int *lpt=&lx;

    printf("%u\n\n",lpt);
    printf("%u\n\n",(lpt+1));


    printf("%c\n\n",*(cpt+1));

}