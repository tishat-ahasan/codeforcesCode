#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[100],i,j,len;
    char s[101];
    scanf("%s",s);
    len=strlen(s);
    j=0;
    for (i=0;i<len;i++){
        if (s[i]=='1')
            a[j++]=1;
        else if (s[i]=='2')
            a[j++]=2;
        else if (s[i]=='3')
            a[j++]=3;
    }
    sort(a,a+j);

    for (i=0;i<j-1;i++)
        printf("%d+",a[i]);
    printf("%d\n",a[i]);

    return 0;
}