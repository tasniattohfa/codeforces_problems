#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    if(n==2)
        sum=1;
    else
        for ( int i=2  ; i<=n ; i++)
    {
        if(n%i==0)
            sum++;
    }
 
    printf("%d",sum);
    return 0;
}
