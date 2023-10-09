// A program to print ASCII Value of a given character.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    printf("ASCII value of %c = %d", c, c);
    return 0;
}
