#include<stdio.h>

void line(int,char);

void main(){

    int line_size=20;
    char s='.';

    line(line_size,s);

    printf("Welcome All!!");

    line(line_size,s);
    line(line_size,s);

}
void line(int size,char ch)
{
    printf("\n");
    for(int i=1;i<=size;i++){
        printf("%c",ch);
    }
    printf("\n");
}


