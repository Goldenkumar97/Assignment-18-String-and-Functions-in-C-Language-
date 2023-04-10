//1. Write a function to calculate length of the string.
#include"stdio.h"
#include"string.h"
void input(char name[]);
void output(char name[]);
int main()
{
    char name[50];
    printf("Enter string ");
    input(name);
    output(name);
    return 0;

}
void input(char name[])
{
  gets(name);  
}
void output(char name [])
{
    printf("length of string =%d",strlen(name));
}