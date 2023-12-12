#include<stdio.h>
void slice(char str[],int n,int m);
int main()
{
    char s[100];
    int a,b;
    printf("enter a word\n");
    gets(s);
    printf("enter starting and ending locations of slice(a<b)\n");
    scanf("%d%d",&a,&b);
    slice(s,a,b);


}
void slice(char str[],int n,int m)
{
    char nstr[100];
    int j=0;
    for(int i=n;i<m;i++)
    {
        nstr[j]=str[i];
        j++;
    }
    nstr[j]='\0';
    puts(nstr);
}