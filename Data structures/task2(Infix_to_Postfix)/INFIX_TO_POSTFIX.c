#include <ctype.h>
 #include"stack.h"
 #include"INFIX_To_POSTFIX.h"

// Function to check if a given character is an operator
int isOperator(char op) {
    return (op == '+' || op == '-' || op == '*' || op == '/' || op == '^');
}

// Function to get the precedence of an operator
int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

void infix_to_postfix(const char *infix, char *postfix,Stack s ) {
 //   Stack stack;
  //  stack.top = -1;
StackEntry op;
    int i = 0, j = 0;
    while (infix[i] != '\0') {
        char c = infix[i];

        if (isalnum(c)) {
            postfix[j++] = c;
        } else if (c == '(') {
             Push(c,&s);
        } else if (c == ')') {
            StackTop(&op, &s);
            while (!StackEmpty(&s) &&op != '(') {
                pop(&op,&s);
                postfix[j++] = op;
            }
            StackTop(&op,&s);
            if (!StackEmpty(&s) &&op == '(') {
                pop(&op,&s);
            }
        } else {
            StackTop(&op,&s);
            while (!StackEmpty(&s) && precedence(c) <= precedence(op) ){
                pop(&op,&s);
                 postfix[j++] = op;
            }
            Push(c,&s);
        }
        i++;
    }

    while (!StackEmpty(&s)) {
       pop(&op,&s);
                 postfix[j++] = op;
    }

    postfix[j] = '\0';
}