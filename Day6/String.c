#include<stdio.h>
#include<string.h>

void main(){

    char name[50];

    char *your_name="Ashish";

    int count=0;
    printf("%s\n\n",your_name);

    printf("Enter your name: ");
    scanf("%[^\n]",name);

    printf("Hii, %s !!\n\n",name);

    printf("%d\n\n",strlen(name));

    for(int i=0 ; name[i]!='\0'; i++){

        if(name[i]=='A'||name[i]=='a'){
            count++;
        }

        if(name[i]==' '){
            printf(" ");
            continue;
        }
        else if(name[i]>=65 && name[i]<=90){
            printf("%c",name[i]);
        }
        else
        {
                printf("%c",name[i]-32);
        }

        
    }


    printf("\n\n");

    printf("Total A are: %d\n\n",count);
    //printf("%c\n\n",name[8]);
}