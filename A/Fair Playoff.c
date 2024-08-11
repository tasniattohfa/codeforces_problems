#include<stdio.h>
int main()
{
 
    int t,s1,s2,s3,s4,max_1,max_2,min_1,min_2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
        if(s1>s2)
        {
            max_1=s1;
            min_1=s2;
        }
        else
        {
            max_1=s2;
            min_1=s1;
        }
        if(s3>s4)
        {
            max_2=s3;
            min_2=s4;
        }
 
        else
        {
            max_2=s4;
            min_2=s3;
        }
        if( min_1> max_1 || min_2> max_1 || min_1> max_2 || min_2> max_2)
            printf("NO\n");
        else printf("YES\n");
    }
 
    return 0;
}
