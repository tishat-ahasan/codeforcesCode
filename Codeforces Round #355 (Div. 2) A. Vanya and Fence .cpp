#include<stdio.h>
int main()
{
    int n,h,a,count=0,i;
    scanf("%d%d",&n,&h);
    for (i=0;i<n;i++){
        scanf("%d",&a);
        if (a>h)
            count+=2;
        else count++;
    }
    printf("%d\n",count);
    return 0;
}