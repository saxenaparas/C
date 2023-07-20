// Here, we use [.] operator to get access to get access to the structure members.
// [.] is called as "Structure Member Operator".
// Like [Paras.id] so, (Paras) is structure_name and (id) is a member_name.
// HERE WE USED 2nd SYNTAX FOR STRUCTURE.

struct student
{
    int id;
    float marks;
    char fav_char;
    char spec[50];
};

#include <stdio.h>
#include <string.h>

void main()
{
    struct student Paras, Harry, Ravi; // Here, this line is declared as an local variable.
    Paras.id = 101;
    Harry.id = 102;
    Ravi.id = 103;
    Paras.marks = 98.99;
    Harry.marks = 95.75;
    Ravi.marks = 93.15;
    Paras.fav_char = 'P';
    Harry.fav_char = 'L';
    Ravi.fav_char = 'E';
    strcpy(Paras.spec, "Student of the Year");
    printf("Paras got : %.2f\n His ID is : %d\n His Favorite character is : %c\n", Paras.marks, Paras.id, Paras.fav_char);
    printf("Paras's is : %s\n", Paras.spec);
    printf("Harry got : %.2f\n His ID is : %d\n His Favorite character is : %c\n", Harry.marks, Harry.id, Harry.fav_char);
    printf("Ravi got : %.2f\n His ID is : %d\n His Favorite character is : %c\n", Ravi.marks, Ravi.id, Ravi.fav_char);
}