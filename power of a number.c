#include<stdio.h>
int main()
{
    int base,exponent,i;
    long power=1;
    printf("Enter base value: ");
    scanf("%d",&base);
    printf("\nEnter exponent value: ");
    scanf("%d",&exponent);
    for(i=1;i<=exponent;i++){
        power=power*base;
    }
    printf("\n%d^%d is: %ld",base,exponent,power);
    return 0;
}
