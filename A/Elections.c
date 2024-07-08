#include<stdio.h>
int main()
{
    int a,b,c,t,max;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(a==b && a==c)
            printf("1 1 1\n");
        else if( a>b && a>c)
            printf("%d %d %d\n",a-a,a+1-b,a+1-c);
        else if( b>a && b>c )
            printf("%d %d %d\n",b+1-a,b-b,b+1-c);
        else if( c>a && c>b)
            printf("%d %d %d\n",c+1-a,c+1-b,c-c);
        else if( a==b)
            printf("%d %d %d\n",1,1,a-c+1);
        else if( b==c)
            printf("%d %d %d\n",b-a+1,1,1);
        else if(c==a)
            printf("%d %d %d\n",1,a-b+1,1);
    }
    return 0;
}
