#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main ()
{
    int sum=0;
    char s[100];
    scanf("%s",s);
    int a =strlen(s);
    for( int i=0 ; i<a ; i++)
    {
        if( s[i]=='H' || s[i]=='Q' || s[i]=='9')
            sum++;
    }
    if (sum>0)
        printf("YES");
    else printf("NO");
    return 0;
}
