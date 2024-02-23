#include <stdio.h>
#include <stdlib.h>

 struct Roommate{
    char name[20];
    int age;
    char major[30];
    double gpa;
    };

int main()
{
   struct Roommate roommate1;
    roommate1.age  = 23;
    roommate1.gpa = 3.99;
    strcpy(roommate1.name, "Nezam");
    strcpy(roommate1.major, "Software Engineering");

    printf("%s.\n", roommate1.name);
    printf("%f.\n", roommate1.gpa);
    printf(roommate1.major);

    return 0;
}
