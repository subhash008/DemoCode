#include<stdio.h>

void main(){

    int marks[]={55,88,78,34};

    //char name[20];
    //char ch;

    //scanf("%c%s",&ch,name);

    printf("Value on O index : %d\n\n",marks[0]);

    for (int i=0;i<4;i++){
      printf("%u\t",&marks[i]);  
    }
    
    printf("\n\n%u\n\n",&marks[0]);

    printf("%u\n\n",marks);

    

    //printf("Value using the ptr at index 2 : %d\n\n",ptr[2]);

    printf("first vaue using index : %d and using array name: %d\n\n",marks[0],*marks);
    printf("first vaue using index : %d and using array name: %d\n\n",marks[2],*(marks+2));
    //new way to access array using pointer artmetic

    //for (int i=0;i<4;i++){
    //  printf("%d\t",*(marks+i));
   // }

   // one more way

   for(int *ptr=marks; ptr<marks+4;ptr++){

    printf("%d\t",*ptr);
   }

}