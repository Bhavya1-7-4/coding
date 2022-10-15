#include<stdio.h>
int main()
{
    int n,firstDigit;
    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("\nLast digit is: %d",n%10);
     while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    printf("\nFirst digit is: %d",n);

   return 0;
}
