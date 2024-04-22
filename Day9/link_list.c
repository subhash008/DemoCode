#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data; // Data to be stored
    struct Node* next; // Pointer to the next node
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head_ref;
    *head_ref = newNode;
}

void insertAtEnd(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }

    struct Node* last = *head_ref;

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}

void deleteNode(struct Node** head_ref, int key) {

    if (*head_ref == NULL)
        return; // List is empty

    struct Node* temp = *head_ref, *prev;

    // If head node itself holds the key
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // Search for the key to be deleted
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL)
        return;

    // Unlink the node from the list
    prev->next = temp->next;
    free(temp);
}


void printList(struct Node* head) {

    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void main(){
    struct Node* head = NULL;
    int op;
    int num;

    do{
        printf("1. insert at end\n2. inset at start\n3.delete\n4.print list\5.exit\n\nYour option : ");
        scanf("%d",&op);
        switch(op){

        case 1:
            printf("Enter number to add: ");
            scanf("%d",&num);
            insertAtEnd(&head,num);
            break;
        case 2:
            printf("Enter number to add: ");
            scanf("%d",&num);
            insertAtBeginning(&head,num);
            break;
        case 3:
            printf("Enter number to delete: ");
            scanf("%d",&num);
            deleteNode(&head,num);
            break;
        case 4 :
            printList(head);
            break;



        }
    }while(op!=5);



}
