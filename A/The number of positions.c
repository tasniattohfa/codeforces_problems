#include<stdio.h>
int main ()
{
    int n,a,b;
    int p,q,r;
    scanf("%d %d %d",&n,&a,&b);
    p=n-a-1;
    if(p>b)
        r=b+1;
    else r=p+1;
    printf("%d",r);
    return 0;
}
