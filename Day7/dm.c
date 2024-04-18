#include<stdio.h>
#include<stdlib.h>

void main(){

    int n;
    printf("How many marks you want to store : ");
    scanf("%d",&n);
    int *marks;

    //marks= (int *) malloc(n * sizeof(int));
    marks= (int *) calloc(n,sizeof(int));

  
    for (int i=0;i<n; i++){
        scanf("%d",&marks[i]); // scanf("%d", (marks+i));
    }
    

    printf("Marks are : \n");

    for (int i=0;i<n; i++){
        printf("%d\t",marks[i]); // printf("%d", *(marks+i));
    }
    free(marks); // to prevent memory leak

    marks=NULL; // assigning NULL to Dangling Pointer

    printf("\n\n");

}
