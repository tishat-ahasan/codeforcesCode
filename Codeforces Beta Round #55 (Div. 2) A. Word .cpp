#include<stdio.h>
#include<string.h>
int main()
{

    char a[100];
    int upp=0,low=0,i;
    scanf("%s",a);
    for (i=0;a[i];i++){
        if (a[i]>64 && a[i] < 91)
            upp++;
        else
            low++;
    }
    if (low>=upp)
        strlwr(a);
    else
        strupr(a);

    printf("%s\n",a);
    return 0;
}