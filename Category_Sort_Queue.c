#include <stdio.h>
#define size 50
int queue[size];
int front = -1;
int rear = -1;
int ele, m;
void enqueue(int ele)
{
    if (rear == size - 1)
    {
        printf("Overflow!");
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            queue[rear] = ele;
        }
        else
        {
            rear = rear + 1;
            queue[rear] = ele;
        }
    }
}
void display()
{
    if (front == -1 || rear < front)
    {
        printf("Empty");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}
void cat()
{

    printf("\ncategory:\n");
    printf("\n1-10: ");
    for (m = front; m <= rear; m++)
    {
        if (queue[m] >= 1 && queue[m] < 10)
        {
            printf("%d\t", queue[m]);
        }
    }
    printf("\n10-20: ");
    for (m = front; m <= rear; m++)
    {
        if (queue[m] >= 10 && queue[m] < 20)
        {
            printf("%d\t", queue[m]);
        }
    }
    printf("\n20-30: ");
    for (m = front; m <= rear; m++)
    {
        if (queue[m] >= 20 && queue[m] < 30)
        {
            printf("%d\t", queue[m]);
        }
    }
    printf("\n30-100: ");
    for (m = front; m <= rear; m++)
    {
        if (queue[m] >= 30 && queue[m] <= 100)
        {
            printf("%d\t", queue[m]);
        }
    }
}
void sort()
{
    int p, q;
    for (p = front; p < rear; p++)
    {
        for (q = p + 1; q <= rear; q++)
        {
            if (queue[p] > queue[q])
            {
                int temp = queue[p];
                queue[p] = queue[q];
                queue[q] = temp;
            }
        }
    }
    printf("\nSorted:\n");
    display();
}
int main()
{
    int n;
    printf("enter the number of ele\n");
    scanf("%d", &n);
    printf("enter the %d element(1-100):\n", n);
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &ele);
        enqueue(ele);
    }
    printf("Entered elements are:\n");
    display();
    sort();
    cat();
}
