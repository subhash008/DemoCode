#include<stdio.h>



#define OS 5

void main(){

    int x= 0; // 3*2+2

    printf("%d\n\n",x);

#if(OS == 1)

        printf("Code for win\n\n");

#elif(OS ==2)
        printf("Code for Linux\n\n");

#else
        printf("Code for MAC\n\n");
#endif





#if (DEBUG == 1)
            printf(" Debug Info \n\n");
            printf("More Debug Info\n\n");

#endif

    printf(" Normal Code ....\n\n");


#ifdef DEBUG
            printf("Debuging is on\n\n");
#else

            printf("Debug is off \n\n");
#endif // DEBUG


}
