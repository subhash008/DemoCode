#include <stdio.h>
#define MAX_SIZE 5
typedef struct {
    int data[MAX_SIZE];
    int front, rear;
} Queue;

/*
void initialize_queue(Queue* q) {
    q->front = q->rear = -1;
}

int is_empty(Queue* q) {
    return q->front == -1;
}

int is_full(Queue* q) {
    return q->rear == MAX_SIZE - 1;
}
*/
void enqueue(Queue* q, int value) {

    if (q->rear == MAX_SIZE - 1) {
        printf("Queue overflow\n");
        return;
    }

    if (q->front == -1) {
        q->front = 0;
    }

    q->rear++;

    q->data[q->rear] = value;
}

int dequeue(Queue* q) {
    if (q->front == -1) {
        printf("Queue underflow\n");
        return -1;
    }

    int value = q->data[q->front];
    q->front++;

    if (q->front > q->rear) {
        q->front = q->rear = -1;
    }

    return value;
}

int peek(Queue* q) {

    if (q->front == -1) {
        printf("Queue is empty\n");
        return -1;
    }

    return q->data[q->front];

}

void print_queue(Queue* q){
    printf("\n");

    for(int i= q->front ; i<=q->rear; i++){

        printf("%d\t",q->data[i]);
    }
    printf("\n\n");
}

int main() {
    Queue myQueue;
    myQueue.front = myQueue.rear = -1;

    //initialize_queue(&myQueue);
    int choice, value;
    do {
        printf("\nQueue Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("5. Print\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            enqueue(&myQueue, value);
            break;
        case 2:
            value = dequeue(&myQueue);
            if (value != -1) {
                printf("Dequeued element: %d\n", value);
            }
            break;
        case 3:
            value = peek(&myQueue);
            if (value != -1) {
                printf("Front element: %d\n", value);
            }
            break;
        case 4:
            printf("Exiting...\n");
            break;
        case 5:
            print_queue(&myQueue);
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 4);
    return 0;
}
