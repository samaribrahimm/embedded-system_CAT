#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include"stack.h"
#include"Infix_To_Postfix.h"
 #include"INFIX_TO_POSTFIX.C"
 #include"stack.c"



int main() {
    char infix[100], postfix[100];
    printf("Enter the infix expression: ");
    scanf("%s", infix);
	Stack s;
    CreateStack(&s);
   infix_to_postfix(infix, postfix , s );
    printf("Postfix expression: %s\n", postfix);
    return 0;
}