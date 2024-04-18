#include<stdio.h>
#include<string.h>

#define SIZE 50
typedef struct {
        int id;
        char name[50];
        int dep_id;
        float sal;
        
    } Emp;

void add_emp(Emp emp[],int *size){
    //printf("Function add_emp\n\n");
    printf("Enter the id : ");
    scanf("%d",&emp[*size].id); 
    printf("Enter name : ");
    scanf("%s",emp[*size].name);
    printf("Enter dept : ");
    scanf("%d",&emp[*size].dep_id);
    printf("Enter Salary : ");
    scanf("%f",&emp[*size].sal);
    *size++;
    
}

void list_emp(Emp emp[],int *size){
    //printf("Function list_emp\n\n");

    for(int i =0; i<*size;i++){
        print_emp(&emp[i]);
    }
}

int search_emp(Emp emp[],int *size){
    printf("Function search_emp\n\n");

}



void print_emp(Emp *emp){

    printf("Emp id is : %d\n",emp->id);
    printf("Emp name is : %s\n",emp->name);
    printf("Emp dept is : %d\n",emp->dep_id);
    printf("Emp salary is: %.2f\n\n",emp->sal);
}

void main(){
    
    Emp emp[SIZE];
    int count= 0;
    int op;
    printf("-----------------Welcome to EMS------------------\n");
    while(1){

        printf("Select one of the option :\n");
        printf("1. List all Employees\n");
        printf("2. Add Employee\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Your Option : ");
        scanf("%d",&op);

        switch (op)
        {
            case 1:
                list_emp(emp,&count);
                break;
            case 2:
                add_emp(emp,&count);
                break;
            case 3:
                search_emp(emp,count);
                break;
            case 4:
                return 0;
            default:
                printf("Please Select one of the valid option!!!\n\n");
                break;
        }
    }
    
}