
#include<stdio.h>

void main(){

    int roll;
    char name[20];
    int marks;

    FILE *fp;
    fp = fopen("xyz.txt","r");

    if(fp== NULL)
    {
        printf("Problem in opening file....!!!\n");
        return 1;
    }
   // printf(" File opened ....!!!\n\n");

    while(fscanf(fp,"%d %s %d",&roll,name,&marks) !=EOF){

        printf("Name: %s Roll: %d   marks: %d\n",name,&roll,&marks);
    }





    // EOF

}
