#include<stdio.h>
#include<stdlib.h>

void main(){

    int n;
    printf("How many marks you want to store : ");
    scanf("%d",&n);
    int *marks;

    //marks= (int *) malloc(n * sizeof(int));

    marks= (int *) calloc(n,sizeof(int));

    int *temp_marks= marks;

    for (int i=0;i<n; i++){
        scanf("%d",&marks[i]); // scanf("%d", (marks+i));
    }
    
    //realloc on marks

    printf("Marks are : \n");

    for (int i=0;i<n; i++){
        printf("%d\t",marks[i]); // printf("%d", *(marks+i));
    }
    free(marks); // to prevent memory leak

    marks=NULL; // assigning NULL to Dangling Pointer
    temp_marks=NULL;
    printf("\n\n");

}
