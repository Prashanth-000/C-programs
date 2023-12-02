#include <stdio.h>
int main()
{
    int a = 0;
    printf("I WILL MAKE YOU ENTER ODD NUMBER...\n");
    while (1 == 1)
    {
        printf("Enter a\n");
        scanf("%d", &a);
        if (a % 2 != 0)
        {
            printf("Thankyou!!!\n");
            printf("I made you enter a odd number!.");
            break;
        }
    }
}
