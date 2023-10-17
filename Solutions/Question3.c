	// Write a program to calculate area and perimeter of a Rectangle.
    #include<stdio.h>
    int main()
    {
        int l, b, ar, pr;
        printf("Enter the lenght of the rectangle.\n");
        scanf("%d",&l);
        printf("Enter the breadth of the rectangle.\n");
        scanf("%d",&b);
        ar=l*b;
        pr=2*(l+b);
        printf("The Parameter of the rectangle with lenght = %d and breadth = %d is : %d .\n", l,b,pr);
        printf("The Area of the rectangle with lenght = %d and breadth = %d is : %d .\n", l,b,ar);

        return 0;
    }
    