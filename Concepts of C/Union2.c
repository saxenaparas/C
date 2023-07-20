#include <stdio.h>
#include <string.h>

union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

void main()
{
    union student st;
    st.id = 34;
    st.marks = 98;
    st.fav_char = 'u';
    strcpy(st.name, "Paras"); 
    /*
     REMEMBER: {st.name} is assigned at the end of the line so, 
     last assigned variable value will be secured first i.e. 
     alloctaed last assigned variable value will gets allocate 
     in the union memory first then the rest of it. 
    */ 
    printf("The id is : %d\n", st.id);
    printf("The marks is : %d\n", st.marks);
    printf("The fav_char is : %c\n", st.fav_char);
    printf("The Name is : %s\n", st.name);
}