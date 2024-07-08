    #include<stdio.h>
    #include<ctype.h>
    #include<stdlib.h>
    #include<string.h>
    int main()
    {
        int a[26]={0},f=0;
        char s[1001];
        gets(s);
 
        for(int i=0; i<strlen(s); i++)
        {
        if(s[i]>= 'a' && s[i]<= 'z')
        a[s[i]-97]++;
        }
 
        for(int i=0;i<26;i++)
        {
        if(a[i]!= 0)
        f++;
        }
 
        printf("%d",f);
        return 0;
    }
