#include<stdio.h>
int main()
{

    int a;
    scanf("%d",&a);
    int b=a/5;
    if(a%5==0)
    printf("%d\n",b);
    else
    printf("%d\n",b+1);

    return 0;
}