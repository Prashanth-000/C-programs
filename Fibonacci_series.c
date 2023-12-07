#include <stdio.h>
int fib(int n);
int main()
{
    int n, i;
    printf("FIBONACCI SERIES\n");
    printf("Enter the number of elemets required\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n%d", fib(i));
    }
    return 0;
}
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    int fibn = fib(n - 1) + fib(n - 2);
    return fibn;
}