#include<stdio.h>
#include<string.h>

typedef struct {
        int id;
        char name[50];
        int dep_id;
        float sal;
        
    } Emp;
/*
// implimented by call by value
void print_emp(Emp rec){
     printf("Detail of emp id : %d\n\n",rec.id);
    printf("name of emp is : %s\n",rec.name);
    printf("dept id of emp is : %d\n",rec.dep_id);
    printf("salary of emp is : %f\n\n",rec.sal);

}
*/

// passing structur using call by refrence

void print_emp(Emp *emp){

    printf("Emp id is : %d\n",emp->id);
    printf("Emp name is : %s\n",emp->name);
    printf("Emp dept is : %d\n",emp->dep_id);
    printf("Emp salary is: %.2f\n\n",emp->sal);
}

void main(){
    
    Emp emp ={30,"Subhash",400,50000};

    print_emp(&emp);


   

    
}