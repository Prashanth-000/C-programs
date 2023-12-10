#include<stdio.h>

int table(int arr[][10],int m,int n,int p);

int main()
{
    int t[2][10],i,x,y;

    printf("Enter 2 numbers for multi table\n");
    scanf("%d%d",&x,&y);

    table(t,0,10,x);
    table(t,1,10,y);

    for(i=0;i<10;i++)
    {
    printf("%d\t",t[0][i]);
    }

    printf("\n\n");

    for(i=0;i<10;i++)
    {
    printf("%d\t",t[1][i]);
    }

    return 0;
}
int table(int arr[][10],int m,int n,int p)
{
    for(int i=0;i<n;i++)
    {
        arr[m][i]=p*(i+1);
    }

}