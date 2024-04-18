#include<stdio.h>
#include<string.h>

struct Project{
        int id;
        char name[100];
        char p_manager[50];
};

/*
struct Emp{
        int id;
        char name[50];
        int dep_id;
        float sal;
        //struct Project pro;
    };
*/
typedef struct {
        int id;
        char name[50];
        int dep_id;
        float sal;
        //struct Project pro;
    } Emp;

void print_emp(Emp rec){
     printf("Detail of emp id : %d\n\n",rec.id);
    printf("name of emp is : %s\n",rec.name);
    printf("dept id of emp is : %d\n",rec.dep_id);
    printf("salary of emp is : %f\n\n",rec.sal);

}

void main(){
    //struct Emp piyush,employee[10];

    Emp piyush,employee[10];

    printf("%d\n\n",sizeof(piyush));

    piyush.id=23;

    strcpy(piyush.name,"Piyush");     //piyush.name="Piyush" ; wrong wrong

    piyush.dep_id=400;

    //piyush.sal=60000;

    printf("Enter the salary o employee : ");
    scanf("%f",&piyush.sal);

    print_emp(piyush);

}