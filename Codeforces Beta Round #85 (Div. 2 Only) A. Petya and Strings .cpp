#include<stdio.h>
#include<string.h>
int main()
{

    int i,j,k;
    char a[101],b[101];
    scanf("%s",a);
    scanf("%s",b);
    strlwr(a);
    strlwr(b);
    int flag=0;
    j=strlen(a);
    for (i=0;i<j;i++){
        if (a[i]<b[i]){
            flag=-1;
            break;
        }
        else if (a[i]>b[i]){
            flag=1;
            break;
        }
    }
    printf("%d\n",flag);

    return 0;
}