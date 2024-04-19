#include <stdio.h>

typedef struct {

    int id;
    char name[20];
    int sal;
} Emp;

void read_data(){

    Emp temp;

    FILE *fp = fopen("emp.data","rb");

    if(fp==NULL){
        printf("Problem in opening File...!!!\n\n");
        return ;
    }

    while(fread(&temp,sizeof(temp),1,fp) ==1){

        printf("Id : %d\n",temp.id);
        printf("name : %s\n",temp.name);
        printf("sal : %d\n\n",temp.sal);
    }

    fclose(fp);


}

void add_data(){

    Emp temp;

    printf("Id : ");
    scanf("%d",&temp.id);
    printf("name : ");
    scanf("%s",temp.name);
    printf("sal : ");
    scanf("%d",&temp.sal);

    FILE *fp = fopen("emp.data","ab");

    if(fp==NULL){
        printf("Problem in opening File...!!!\n\n");
        return ;
    }

    fwrite(&temp,sizeof(temp),1,fp);

    fclose(fp);
}


int main(){

    int op;
    while(1){
        printf("Enter what you want : \n\n");
        printf("1. to read employee data\n");
        printf("2. add new employee \n");
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

}
