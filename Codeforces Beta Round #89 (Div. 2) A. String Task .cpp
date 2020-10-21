#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[200];
    int i,j;
    scanf("%s",a);
    strlwr(a);
    j=strlen(a);
    int    k=0;


    for (i=0;i<j;i++){
        if (a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o'  && a[i]!='u' && a[i] != 'y')
            {
               printf(".%c",a[i]);
            }
    }
    printf("\n");
    return 0;


}