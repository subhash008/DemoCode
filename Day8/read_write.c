
#include<stdio.h>
#include<string.h>

void add_data(){
    int roll;
    char name[20];
    int marks;

    long int num= 343434342222277;

    FILE *fp;
    fp = fopen("student.txt","a");

    if(fp== NULL)
    {
        printf("Problem in opening file....!!!\n");
        return 1;
    }
   // printf(" File opened ....!!!\n\n");

    printf("Enter Roll No: ");
    scanf("%d",&roll);
    printf("Enter Name : ");
    scanf("%s",name);
    printf("Enter Marks: ");
    scanf("%d",&marks);

    fprintf(fp," %d %s %d",roll,name,marks);

    fclose(fp);
}



void read_data(){
    int roll;
    char name[20];
    int marks;

    FILE *fp;
    fp = fopen("student.txt","r");

    if(fp== NULL)
    {
        printf("Problem in opening file....!!!\n");
        return 1;
    }
   // printf(" File opened ....!!!\n\n");

    while(fscanf(fp," %d%s%d",&roll,name,&marks) !=EOF){

        printf("Name: %s Roll: %d   marks: %d\n",name,roll,marks);
    }

    fclose(fp);


}


int main(){

    int op;
    while(1){
        printf("Enter what you want : \n\n");
        printf("1. to read student data\n");
        printf("2. add new student \n");
        printf("3. exit\n");

        printf("your option : ");
        scanf("%d",&op);
        switch(op){
        case 1:
            read_data();
            break;
        case 2:
            add_data();
            break;
        case 3:
            return 0;
        }
    }






    // EOF

}

