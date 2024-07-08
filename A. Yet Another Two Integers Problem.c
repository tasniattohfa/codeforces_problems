#include<stdio.h>
int main()
{
    int t;
    long long a,b,m;

    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a==b)
        {
            printf("0\n");
        }
        else{
            m=abs(a-b);

            if(m%10==0)
            {
                printf("%lld\n",m/10);


            }
            else{
                printf("%lld\n",m/10+1);


            }
        }
    }

    return 0;
}
