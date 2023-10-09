/*A program to see if the given number is prime or not.*/
#include<stdio.h>
int main()
{
    int n, k, flag=0, r;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    for (k=2 ; k <= n/2 ; k++)
    {
       r = n%k;
       if(r== 0)
       flag=1;
    }
    if (flag==0)
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
    
    
    return 0;
}

    