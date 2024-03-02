#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
int stack[100];
int top=-1;
void push(int a){
    top++;
    stack[top]=a;
}
int pop()
{
    int x=stack[top];
    top--;
    return x;
}
void main(){
    int ch,i,op1,op2,res;
    char infix[25];
    printf("Enter the infix expression\n");
    scanf("%s",infix);
    for(i=0;infix[i]!='\0';i++){
        ch=infix[i];
        if(isalpha(ch))
        {
            printf("invalid 1");
            return;
        }
        else if (isdigit(ch)){
            push(ch-'0');
        }
        else{
            op2=pop();
            if(top<=-1){
                printf("invalid 2");
                return;
            }
            op2=pop();
            switch(ch){
                case '+':res=op1+op2;
                break;
                case '-':res=op1-op2;
                break;
                case '*':res=op1*op2;
                break;
                case '/':(op2!=0)?res=op1/op2:printf("invalid");
                return;
                break;
                case'^':pow(op1,op2);
                break;
                case '%':res=op1%op2;
                break;
                default:printf("invalid 3");
                return;
                break;
            }
            push(res);
            
        }
        
    }
    if(top!=0){
        printf("invalid 4");
        return;
    }
    else{
        printf("%d",stack[top]);
    }
}
