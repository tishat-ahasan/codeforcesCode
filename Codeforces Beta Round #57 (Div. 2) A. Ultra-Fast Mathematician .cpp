#include<stdio.h>
#include<string.h>
int main()
{

    char a[101],b[101],c[101];
    scanf("%s%s",a,b);
    int d=strlen(a);
    int i;
    for(i=0;i<d;i++){
        if(a[i]==b[i])
        c[i]='0';
        else
            c[i]='1';
    }
    c[i]='\0';
    printf("%s\n",c);
    return 0;
}