#include<stdio.h>

void main(){

    int op,num1,num2;
    do{

    
    printf("Select on of the following option: \n");
    printf("\t1. to add number \n");
    printf("\t2. to subtract the number\n");
    printf("\t3. to mul\n");
    printf("\t4. to div \n");
    printf("\t5. to EXIT");
    printf("\n\tYour Option: ");

    scanf("%d",&op);

    if(op>0 && op <5){
        printf("Enter the first Number : ");
        scanf("%d",&num1);
        printf("Enter the second Number : ");
        scanf("%d",&num2);
    }
    

    switch (op)
    {
    case 1:
        printf("Sum is : %d\n\n",num1+num2);
        break;

    case 2:
        printf("Sub is : %d\n\n",num1-num2);
        break;

    case 3:
        printf("Mul is : %d\n\n",num1*num2);
        break;
    case 4:
        printf("Div is : %d\n\n",num1/num2);
        break;
    case 5:
        break;
    default:
        printf("Select the someting from the given options!!!!!\n\n");
        break;
    }
    }while(op!=5);

    printf("Thank you !!!!!\n\n");


}