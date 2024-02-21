#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s.\n", name);

    */

    char name2[20];
    printf("Enter your name: ");
    fgets(name2, 20, stdin);
    printf("Your name is %s.", name2);

    return 0;
}
