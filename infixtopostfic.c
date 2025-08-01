#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x) {
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}

int main() {
    char exp[100];
    char *e, x;
    printf("Enter the expression: ");
    scanf("%s", exp);
    printf("\nPostfix expression: ");
    
    e = exp;
    while (*e != '\0') {
        if (isalnum(*e)) {
            // If the character is an operand, print it directly
            printf("%c ", *e);
        } else if (*e == '(') {
            // If the character is '(', push it onto the stack
            push(*e);
        } else if (*e == ')') {
            // If the character is ')', pop and print until '(' is found
            while ((x = pop()) != '(')
                printf("%c ", x);
        } else {
            // If the character is an operator
            while (top != -1 && priority(stack[top]) >= priority(*e))
                printf("%c ", pop());
            push(*e);
        }
        e++;
    }

    // Pop all remaining operators in the stack
    while (top != -1) {
        printf("%c ", pop());
    }
    
    return 0;
}
