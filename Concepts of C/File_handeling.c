#include <stdio.h>
int main() 
{   
    FILE *fp;    
    fp = fopen("data.txt", "r");
    char ch;    
    ch = fgetc(fp);
    printf("\nThe character is: %c", ch);
    fclose(fp);
}