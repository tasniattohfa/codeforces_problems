#include<stdio.h>
int main()
{
    double p,n,sum=0,ans;
    scanf("%lf",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lf",&p);
        sum =sum + p ;
    }
    ans=sum/n;
    printf("%.15lf",ans);
    return 0;
}
