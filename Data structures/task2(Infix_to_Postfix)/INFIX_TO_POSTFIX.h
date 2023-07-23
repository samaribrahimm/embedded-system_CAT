 #ifndef INF_TO_POST_H
 #define INF_TO_POST_H
 #include <stdio.h>
#include "stack.h"
int isOperator(char );
int precedence(char ) ;
void infix_to_postfix(const char *, char *,Stack ) ;


#endif