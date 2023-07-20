#include <stdio.h>
void main()
{
    //goto statement is used to get out from loops by a single statements
    /*
        If in a nested loop if we use a 

             break statement 
                  or 
           condition statement

        then we just get out of a single loop 
        inside a loop but not from all loops 
        nested in each other for that type of 
        case we use goto statement.
    */
   int n;
   for (int i = 0; i < 8; i++)
   {
       printf("%d\n",i);
       for (int j = 0; j < 8; j++)
       {
           printf("Enter the no.\nEnter 0 to Exit");
           scanf("%d",&n);
           if (n==0)
           {
               goto end;
           }
           
       }
       
   }
   end:
   printf("We have exited from the program");
}