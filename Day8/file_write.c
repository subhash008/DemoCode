
#include<stdio.h>
#include<string.h>
void main(){

    int roll=10;
    char name[20]="subhash";
    int marks=67;

    FILE *fp;
    fp = fopen("xyz.txt","r+");

    if(fp== NULL)
    {
        printf("Problem in opening file....!!!\n");
        return 1;
    }
   // printf(" File opened ....!!!\n\n");

    fprintf(fp,"%d %s %d",roll,name,marks);

    roll=4;
    strcpy(name,"Rekha");
    marks=56;

    fprintf(fp,"\n%d %s %d",roll,name,marks);





    // EOF

}
