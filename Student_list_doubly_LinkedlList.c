#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void in_beg();
void in_end();
void del_beg();
void del_end();
struct node
{
    int m1, m2, m3;
    char name[20], usn[20], dept[10];
    struct node *prev, *next;
};
struct node *head, *tail;
void main()
{
    head = 0;
    tail = 0;
    int choice;
    while (1)
    {
        printf("\n---Menu---\n1:crete\n2:display\n3:in_beg\n4:in_end\n5:del_beg\n6:del_end\n7:exit\nenter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            in_beg();
            break;
        case 4:
            in_end();
            break;
        case 5:
            del_beg();
            break;
        case 6:
            del_end();
            break;
        case 7:
            return;
            break;
        default:
            printf("\nInvalid choice!\n");
        }
    }
}
void create()
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter details\n");
    printf("\nNAME:");
    scanf("%s", new->name);
    printf("\nEnter usn:");
    scanf("%s", new->usn);
    printf("\ndept:");
    scanf("%s", new->dept);
    printf("\n3 marks");
    scanf("%d%d%d", &new->m1, &new->m2, &new->m3);
    new->prev = 0;
    new->next = 0;
    if (head == 0)
    {
        head = tail = new;
    }
    else
    {
        tail->next = new;
        new->prev = tail;
        tail = new;
    }
}
void display()
{
    struct node *temp;
    temp = head;
    int count = 0;
    if (head == 0)
    {
        printf("\nEmpty");
    }
    else
    {

        while (temp != 0)
        {
            int avg = 0;
            printf("\nStudent-%d:", count + 1);
            printf("\nName:%s\nusn:%s\ndept:%s\nm1:%d\nm2:%d\nm3:%d\n", temp->name, temp->usn, temp->dept, temp->m1, temp->m2, temp->m3);
            avg = ((temp->m1) + (temp->m2) + (temp->m3)) / 3;
            printf("avg:%d", avg);
            count = count + 1;
            temp = temp->next;
        }
    }
}
void in_beg()
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter details\n");
    printf("\nNAME:");
    scanf("%s", new->name);
    printf("\nEnter usn:");
    scanf("%s", new->usn);
    printf("\ndept:");
    scanf("%s", new->dept);
    printf("\n3 marks");
    scanf("%d%d%d", &new->m1, &new->m2, &new->m3);
    new->prev = 0;
    new->next = 0;
    if (head == 0)
    {
        head = tail = new;
    }
    else
    {
        head->prev = new;
        new->next = head;
        head = new;
    }
}
void in_end()
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter details\n");
    printf("\nNAME:");
    scanf("%s", new->name);
    printf("\nEnter usn:");
    scanf("%s", new->usn);
    printf("\ndept:");
    scanf("%s", new->dept);
    printf("\n3 marks");
    scanf("%d%d%d", &new->m1, &new->m2, &new->m3);
    new->prev = 0;
    new->next = 0;
    if (head == 0)
    {
        head = tail = new;
    }
    else
    {
        tail->next = new;
        new->prev = tail;
        tail = new;
    }
}
void del_beg()
{
    struct node *temp;
    if (head == 0)
    {
        printf("\nUnderflow\n");
    }
    else if (head == tail)
    {
        head = tail = 0;
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = 0;
        free(temp);
        printf("\nDeleted!\n");
    }
}
void del_end()
{
    struct node *temp;
    if (head == 0)
    {
        printf("\nUnderflow\n");
    }
    else if (head == tail)
    {
        head = tail = 0;
    }
    else
    {
        temp = tail;
        tail = tail->prev;
        tail->next = 0;
        free(tail);
        printf("\nDeleted\n");
    }
}
