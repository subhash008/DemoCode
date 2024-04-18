#include<stdio.h>

void main(){

    union Len
    {
        int len_cm;
        int len_mm;
        int len_mt;
        int len_inc;
    };

    union Len len_room;

    len_room.len_cm = 2000;
    printf("Len of in CM :  %d\n\n",len_room.len_cm);

    len_room.len_mt=len_room.len_cm/100;

    printf("Len of Room in Mtr: %d\n\n",len_room.len_mt);
    
    
}