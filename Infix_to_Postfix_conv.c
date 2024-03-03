#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char ch) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    top++;
    stack[top] = ch;
}

char pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    char ch = stack[top];
    top--;
    return ch;
}

int prec(char ch) {
    switch (ch) {
        case '#': return 0;
        case '(': return 1;
        case '+':
        case '-': return 2;
        case '*':
        case '/':
        case '%': return 3;
        case '^': return 4;
        default:
            printf("Invalid operator!\n");
            exit(1);
    }
}

int main() {
    char infix[40], post[MAX_SIZE];
    int i = 0, j = 0;
    printf("Enter infix expression: ");
    scanf("%s", infix);
    push('#');
    for (i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];
        if (ch == '(') {
            push(ch);
        } else if (isalnum(ch)) {
            post[j++] = ch;
        } else if (ch == ')') {
            while (stack[top] != '(') {
                post[j]=pop();
                j=j+1;;
            }
            pop(); // Discard the '('
        } else {
            while (prec(stack[top]) >= prec(ch)) {
                post[j]=pop();
                j=j+1;
            }
            push(ch);
        }
    }
    while (stack[top] != '#') {
        post[j]=pop();
        j=j+1;
    }
    post[j] = '\0';
    printf("Postfix expression: %s\n", post);
    return 0;
}
