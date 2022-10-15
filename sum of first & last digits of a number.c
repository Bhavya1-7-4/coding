#include<stdio.h>
int main()
{
    int n,firstdigit,lastdigit,sum;
    printf("Enter an integer: ");
    scanf("%d",&n);
    lastdigit=n%10;
    printf("\nLast digit is: %d",lastdigit);
     while(n >= 10)
    {
        n = n / 10;
    }
    firstdigit = n;
    printf("\nFirst digit is: %d",n);
    sum=firstdigit+lastdigit;
    printf("\nSum of first and last digits is : %d",sum);
    return 0;
}

