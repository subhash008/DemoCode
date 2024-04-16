#include<stdio.h>

void main(){

    int eng[] ={67,98,32};

    int math[5],sci[5],sst[5],it[5];
    int item;

    //printf("%d\n\n",sizeof(eng)/sizeof(int));3

    for(int i=0; i<sizeof(math)/sizeof(int);i++){

        printf("Enter the marks of Math of roll no : %d\n\n",i+1);
        scanf("%d",&math[i]);
    }

   
   printf(" Enter the marks you are looking for: ");
   scanf("%d",&item);
   int flag=0;

    for(int i=0; i<sizeof(math)/sizeof(int);i++){

        
        if(math[i]==item){
            flag=1;
            printf("mark is present at location %d of array\n\n",i);
        }
        
    }

    if(!flag)
    {
            printf("Mark is not in the array\n\n");
    }
    //printf("Avg is : %d\n\n",sum);
        




}