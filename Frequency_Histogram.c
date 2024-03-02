#include<stdio.h>
void main()
{
    int a[100],i,j,n;
    int frq[10]={0};
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elemnts\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("entered elements\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    for(i=0;i<10;i++){
        for(j=0;j<n;j++){
            if(a[j]==i){
                frq[i]=frq[i]+1;
            }
        }
    }
    printf("\n\nHistogram:\n");
    for(i=0;i<10;i++){
        printf("\n[%d]:",i);
        for(j=0;j<frq[i];j++){
            printf("*\t");
        }
    }

}
