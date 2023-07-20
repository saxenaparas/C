#include<stdio.h>
void main()
{
    int a;
    for(a=0;a<5;a++) 
    /*
    here, 
    1 step - a is initialized value to 0.
    2 step - condition chk that a<5.
    3 step - if true then statement inside for will be executed. 
    4 step - then after execution increment/decrement function will be execute to increase/decrease the value.
    5 step - again this process get repeated with new increased/decreased value of a.
    6 step - this loop will continue till the condition mentioned gets false otherwise it will run indefinitly.  
    */
    {
        printf("HELLO\n");
    }
}