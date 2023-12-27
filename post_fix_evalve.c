#include<stdio.h>
#define size 100
int stack[size];
int top=-1;
void push(int value)
{
    top++;
    stack[top]=value;

}
int pop()
{
    int a;
    a=stack[top];
    top--;
    return a;

}
int is_operand(char ch)
{
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    char postfix[size],ch;
    int i=0,m,result;
    printf("Enter post fix expression\n");
    gets(postfix);
    while(postfix[i]!='\0')
    {
        ch=postfix[i];
        if(is_operand(ch)==1)
        {printf("Enter value of %c",ch);
        scanf("%d",&m);
        push(m);

        }
        else
        {
            int op2=pop();
            int op1=pop();
            switch(ch)
            {
                case '+':result=op1+op2;
                push(result);
                break;
                case '-':result=op1-op2;
                push(result);
                break;
                case '*':result=op1*op2;
                push(result);
                break;
                case '/':result=op1/op2;
                push(result);
                break;
                case '%':result=op1%op2;
                push(result);
                break;
                case '^':result=op1^op2;
                push(result);
                break;
                default:printf("\ninvalid charecter is present\n");
            
            }

        }
        i++;
    }
    result=stack[top];
    printf("\nResult= %d",result);
}