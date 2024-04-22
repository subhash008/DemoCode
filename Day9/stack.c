#include<stdio.h>

#define SIZE 5

typedef struct {

    int stack_arr[SIZE];
    int top;
}Stack;

void push (Stack *stack,int val){

    if(stack->top == SIZE-1){
        printf("StackOVerflow!!! \n\n");
        return;
    }
    stack->top++;
    stack->stack_arr[stack->top]=val; // stack->stack_arr[++stack->top]->val
}

int pop(Stack *stack){

    if(stack->top== -1){
        printf("Stack is empty !!\n\n\n");
        return;
    }
    int data = stack->stack_arr[stack->top];
    stack->top--;
    return data;

    // return stack->stack_arr[stack->top--]
}


int peek(Stack *stack){

    if(stack->top== -1){
        printf("Stack is empty !!\n\n\n");
        return;
    }
    int data = stack->stack_arr[stack->top];
    return data;
}



void display_stack(Stack *stack){

    printf("\n");

    for (int i=stack->top ;i>=0; i--){
        printf("%d\n",stack->stack_arr[i]);
    }
}



void main(){

    Stack stack;
    stack.top=-1;

    int op,num;

    do{
        printf("\n\n1. to push \n2. to Pop\n3. to see stack\n4. to peek \n5.quit\nOption: ");
        scanf("%d",&op);
        switch(op){

    case 1:
        printf(" Enter value to push : ");
        scanf("%d",&num);
        push(&stack,num);
        break;
    case 2:
        num = pop(&stack);
        printf("\n %d is poped\n",num);
        break;
    case 3:
        display_stack(&stack);
        break;

    case 4:
        num = peek(&stack);
        printf("\n %d is poped\n",num);
        break;


        }
    }while(op!=5);

}
