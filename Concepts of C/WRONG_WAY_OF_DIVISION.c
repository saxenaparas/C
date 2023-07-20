#include <stdio.h>
void main()
{
    int a,b;
    /*
    as int is defined for a & b so it
    willn't give a proper decimal output 
    it just give a proper integer output 
    and the decimal part will be wrong,
    TO GET A PROPER DECIMAL OUTPUT YOU 
    NEED TO DEFINE EACH VARIABLE INVOLVED IN THE
    DIVISION IN FLOAT TO GET THE CORRECT ANSWER.
    */
    float c;
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("%f",c);
}
// Now run the below code to get the correct answerand comment the above one.

/*
#include <stdio.h>
void main()
{
    float a,b,c;
    scanf("%f%f",&a,&b);
    c=a/b;
    printf("%f",c);
}
*/