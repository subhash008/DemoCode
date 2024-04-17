#include<stdio.h>
void main(){

    int m[2][4];

    printf("Col: %d\n\n",sizeof(m[0])/sizeof(m[0][0]));

    printf("Row: %d\n\n",sizeof(m)/sizeof(m[0]));

    for(int i=0;i<sizeof(m)/sizeof(m[0]); i++){

        for(int j=0;j<sizeof(m[0])/sizeof(m[0][0]);j++){

        }
    }
/*
    int m[5][5]={
        {10,5,7},
        {5,6,9},
        {6,8,3}

    }  ;

    printf("Matrix is:\n");

    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
        
    }

    printf("Dignoal elemts are:\n");

    for(int i=0;i<3;i++)
    {

        for(int j=0;j<3;j++)
        {
            printf("\t");
            if(i==j)
                printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    

    

*/
}