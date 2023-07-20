/*
> It's similar to structures.
> It's a user defined data_type.
> In structure each member has it's own storage location.
> But, members of union uses single share memory location.
> Single shared memory location is equal to the size of its largest data member.
> Syntax is similar to structure.
> like structure we also use here member access operator in union.
*/

// REMEMBER :
// BUT UNION CAN'T HANDLE ALL MEMBERS AT ONCE.

// Like example: 

struct student{
    float marks; // 4 bytes.
    int id; // 4 bytes.
} st; 
// Here, st is 8 bytes of data.

union student{
    float marks; // 4 bytes.
    int id; // 4 bytes.
} stu;
// Here, stu is 4 bytes of data.
// That means at one time we can only use either marks or id.
// If we try to use both at a time then it gets corrupted.

// SYNTAX FOR UNION :
union test
{
    int a;
    float b;
    char c;
} un;
un.a; // for accessing members of union.
un.b;
un.c;