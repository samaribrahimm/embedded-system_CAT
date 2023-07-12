#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ID;
    printf("please enter your ID\n");
    scanf ("%d",&ID);
    switch (ID){
    case 1234:
    printf("your name is Harry\n");
    break;
    case 5678:
    printf("your name is Ron\n");
    break;
    case 1145:
    printf("your name is Hermione\n");
    break;

    default:
    printf("Wrong ID\n");

}
    return 0;
}
