#include<stdio.h>

int search(int *arr,int size,int item){ //int search(int arr[],int size,int item)

    for(int i=0;i<size;i++){  // for(int i=0 ; arr[i]!=-1; i++)

        if(arr[i]==item){ // if( *(arr+i) == item)
            return i;
        }
    }
    return -1;
}

void main(){

    int roll[]={3,6,7,9,22,54,34,12,45};
    int marks[]={44,67,87,56,87};

    search(marks,5,77);

    int item,index;
    int size=sizeof(roll)/sizeof(roll[0]);

    printf("Enter Your Roll No : ");
    scanf("%d",&item);

    index=search(roll,size,item);

    if(index== -1){
        printf("\nSorry!! you are not able to pass Exam.....\n\n");
    }
    else{
        printf("Congo!!!! You have passed the exam...\n\n");
    }


}