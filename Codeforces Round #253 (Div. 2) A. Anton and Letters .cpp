#include<stdio.h>
int main()
{

    char aa[1001];
    int i,count=0,a[26]={0};
    gets(aa);
    for (i=0;aa[i];i++){
        if (aa[i]>=97 && aa[i]<= 122)
            a[aa[i]-97]=1;
    }

    for (i=0;i<26;i++){
        if (a[i]==1)
            count++;
    }
    printf("%d\n",count);
    return 0;
}