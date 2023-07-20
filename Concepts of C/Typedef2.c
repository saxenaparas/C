typedef struct student
{
    int id;
    float marks;
    char fav_char;
    char spec[50];
} std;

#include <stdio.h>
#include <string.h>

void main()
{
    std Paras, Harry; // Here, this line is declared as an local variable.
    Paras.id = 101;
    Harry.id = 102;
    Paras.marks = 98.99;
    Harry.marks = 95.75;
    Paras.fav_char = 'P';
    Harry.fav_char = 'L';
    strcpy(Paras.spec, "Student of the Year");
    printf("Paras got : %.2f\n His ID is : %d\n His Favorite character is : %c\n", Paras.marks, Paras.id, Paras.fav_char);
    printf("Paras's is : %s\n", Paras.spec);
    printf("Harry got : %.2f\n His ID is : %d\n His Favorite character is : %c\n", Harry.marks, Harry.id, Harry.fav_char);
}