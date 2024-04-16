#include<stdio.h>
void main(){

   /* int x= -5;
    int y = x>>2;
    printf("%d\n\n",y);
    */

   /*int a=90, b=100, c=70, max;

   max=(a>b)? ((a>c)?a:c) : ((b>c)?b:c);

   printf("Max is : %d\n\n",max);
   */

  /*
  int i,j;

  for(i=0,j=10 ;i!=j; i++, j--){

    printf("i is : %d\t j is : %d\n",i,j);
  }
  */

   int x=10;
   int *ptr;

   ptr=&x;

   printf("X is %d\n\n",x);
   printf("X is %u\n\n",&x);

   printf("X is %d\n\n",*ptr);


}