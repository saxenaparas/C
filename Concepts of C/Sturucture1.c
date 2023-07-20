// It helps to create a complex data type contains diverse information
// Like array arranges & stores value of same data_type.
// Structure arranges & stores value of different data_type.

// 1st SYNTAX OF STRUCTURE :
/*

struct [structure_name]
{
    data_type var 1
    data_type var 2
    data_type var 3 ...
}
[structure_variables];

*/
// Now a new data_type is created that is [structure_name].

struct student
{
    int id;
    float marks;
    char fav_char;
    char spec[50];
} Paras, Harry, Ravi;

#include <stdio.h>
#include <string.h>

void main()
{
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