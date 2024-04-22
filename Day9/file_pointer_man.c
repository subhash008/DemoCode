#include<stdio.h>

void main(){


    FILE *fp=fopen("demo_fp.txt","r");
    char ch;
    int loc;



    while(ch=fgetc(fp)){
        if(ch==EOF){
            break;
        }
        if(ch==','){
            loc=ftell(fp);
            printf("%d\n",loc);
           //fseek(fp,1,SEEK_CUR);
        }

        //printf("%c",ch);
    }

    fseek(fp,loc,SEEK_SET);


    while(ch=fgetc(fp)){
        if(ch==EOF){
            break;
        }
        printf("%c",ch);
    }

    //fseek(fp,0,SEEK_SET);

    rewind(fp);

    printf("\n\nReading again from SET\n\n");

    while(ch=fgetc(fp)){
        if(ch==EOF){
            break;
        }
        printf("%c",ch);
    }

    fclose(fp);


}
