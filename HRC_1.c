#include<stdio.h>
int sum(int a);
int main()
{
    int n,n1,n2;
    printf("Enter num of terms\n");
    scanf("%d",&n);
    printf("Enter n1\n");
    scanf("%d",&n1);
    printf("Enter n2\n");
    scanf("%d",&n2);
    sum(n1);
    sum(n2);
    return 0;
}
int sum(int a)
{
    int sum=0;
    for(int i=1;i<a;i++)
    {
        if(i%3==0||i%5==0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);

}