/* A program to print the sum and product of digits of an integer.*/ 
#include <stdio.h>
 
int sumDigits(int num)
{
    int sum=0,rem;
    while(num > 0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
 
    return sum;
}

int proDigits(int num)
{
    int pro=1,rem;
    while(num > 0)
    {
        rem=num%10;
        pro*=rem;
        num=num/10;
    }
 
    return pro;
 
}
int main()
{
    int n;
    printf("\nEnter an integer number :");
    scanf("%d",&n);
 
    printf("\nSUM of all Digits is : %d",sumDigits(n));
    printf("\nPRODUCT of all digits: %d",proDigits(n));
    return 0;
}
