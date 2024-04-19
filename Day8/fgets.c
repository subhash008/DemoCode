#include<stdio.h>

void main(){

    char str[100]=" this i want to sotre in file";
    FILE *fp = fopen("student.txt","r");

    char ch;

    while(ch=fgetc(fp)){
        if(ch==EOF)
            break;
        if(ch == ' '){
            printf(" ");
            continue;
        }
        ch=ch-32;
        printf("%c",ch);
    }

    //fgets(str,30,fp);

    //fputs(str,fp);

    //printf("%s",str);
}
