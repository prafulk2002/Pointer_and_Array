//Consider a compiler where int takes 4 bytes, char takes 1 byte and pointer takes 4 bytes.

#include<stdio.h>
int main()
{
    int arri[]={1,2,3};
    int *ptri=arri;
    
    char arrc[]={4,5,6};
    char *ptrc=arrc;
    
    printf(" size of arri is:%d",sizeof(arri));
    printf("\n size of ptri is:%d",sizeof(ptri));
    printf("\n size of arrc is:%d",sizeof(arrc));
    printf("\n size of ptrc is:%d",sizeof(ptrc));
    return 0;
}
