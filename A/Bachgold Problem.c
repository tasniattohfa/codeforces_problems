#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    printf("%lld\n",n/2);
 
    while (n>3)
    {
    printf("2 ");
    n=n-2;
    }
 
    printf("%lld",n);
    return 0;
}
