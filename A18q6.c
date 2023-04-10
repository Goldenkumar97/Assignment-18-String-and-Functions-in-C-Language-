//6. Write a function to check whether a given string is an alphanumeric string or not.
//(Alphanumeric string must contain at least one alphabet and one digit)
#include "stdio.h"
#include "string.h"
void output(char[]);
int main()
{
    int i;
    char str[50];
    printf("enter a string = ");
    gets(str);
    output(str);
    return 0;
}
void output(char str[])
{
    int i, count=0, temp=0;
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            count++;
      else  if (str[i] >= '0' && str[i] <= '9')
            temp++;
    }
    if(count++ && temp++)
        printf("Alphanumeric String ");
    else
        printf("Not an Alphanumeric String");
}