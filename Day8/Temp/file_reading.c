#include <stdio.h>
typedef struct {

    int id;
    char name[20];
    int sal;
} Emp;

void main(){
    Emp temp;
    FILE *fp = fopen("emp.data","rb");

    if(fp==NULL){
        printf("Problem in opening File...!!!\n\n");
        return ;
    }

    if(fread(&temp,sizeof(temp),1,fp) !=EOF){
        printf(" Problem in reading data !!!\n\n");
        return;
    }

    fclose(fp);
    printf("Id : %d\n",temp.id);
    printf("name : %s\n",temp.name);
    printf("sal : %d\n\n",temp.sal);




}
