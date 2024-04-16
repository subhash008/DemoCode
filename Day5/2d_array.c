#include<stdio.h>
#include<string.h>

void main(){

    int marks[3][3];

    int i,j;

    printf("*******************************************************\n\n");
    printf("Enter the marks of the student :\n\n");
    
    for(i=0;i<3;i++){

        printf("\tEnter the marks of roll no : %d\n",i+1);

        for(j=0;j<3;j++){
            printf("enter the marks of %d subject : ",j+1);
            scanf("%d",&marks[i][j]);
        }

    }
    printf("\n---------------------------------------------------\n");
    printf("\tRoll No\tEng\tMath\tSci");
    printf("\n---------------------------------------------------");
     for(i=0;i<3;i++){

        printf("\n\t%d",i+1);

        for(j=0;j<3;j++){
            printf("\t%d ",marks[i][j]);
            
        }
        printf("\n---------------------------------------------------");

    }
}