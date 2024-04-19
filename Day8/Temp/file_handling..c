
#include<stdio.h>

typedef struct {

    int id;
    char name[20];
    int sal;
} Emp;

void main(){

    Emp temp = {22, "Subhash", 40000};

    FILE *fp = fopen("emp.data","wb");

    if(fp==NULL){
        printf("Problem in opening File...!!!\n\n");
        return ;
    }

    fwrite(&temp,sizeof(temp),1,fp);

    fclose(fp);





}
