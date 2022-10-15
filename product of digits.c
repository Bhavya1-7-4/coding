#include<stdio.h>
int main()
{
    int n,pro=1,b;
    printf("Enter n: ");
    scanf("%d",&n);
    while(n>0)
    {
        b=n%10;
        pro=pro*b;
        n=n/10;
    }
    printf("\nProduct is: %d",pro);
    return 0;
}
