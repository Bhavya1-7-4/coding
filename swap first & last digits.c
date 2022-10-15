#include<stdio.h>
int main()
{
    int n,firstDigit,lastdigit,t;
    printf("Enter an integer: ");
    scanf("%d",&n);
    lastdigit=n%10;
    printf("\nLast digit is: %d",lastdigit);
     while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    printf("\nFirst digit is: %d",n);
    firstDigit=t;
    lastdigit=firstDigit;
    t=lastdigit;
    printf("\nNumber after swap is: %d",t);



   return 0;
}
