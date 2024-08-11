#include<stdio.h>
int main ()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    if( m-n>=0 && k-n>=0)
        printf("Yes");
    else
        printf("No");
    return 0;
}
