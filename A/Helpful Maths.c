#include<stdio.h>
#include<string.h>
 
int main()
{
    char c[100],temp;
    int i,j,k,x;
    scanf("%s",&c);
    x=strlen(c);
    for(i=0;i<x-1;i=i+2)
    {
        for(j=0;j<x-1;j=j+2)
        {
            if(c[j]>c[j+2])
            {
                temp=c[j];
                c[j]=c[j+2];
                c[j+2]=temp;
            }
        }
    }
    for(k=0;k<x;k++)
    {
        printf("%c",c[k]);
    }
    return 0;
}
