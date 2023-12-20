#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)calloc(3,sizeof(float));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    for(int i=0;i<3;i++)
    {
    printf("%d\t",ptr[i]);
    }
    printf("\n");

    ptr=realloc(ptr,5);

    ptr[0]=0;
    ptr[1]=2;
    ptr[2]=4;
    ptr[3]=6;
    ptr[4]=8;

    for(int i=0;i<5;i++)
    {
    printf("%d\t",ptr[i]);
    }

    free(ptr);


}