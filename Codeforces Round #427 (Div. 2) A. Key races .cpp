#include<stdio.h>
int main()
{
    int n,a1,a2,t1,t2;
    int x1,x2;
    scanf("%d%d%d%d%d",&n,&a1,&a2,&t1,&t2);
    x1=n*a1+2*t1;
    x2=n*a2+2*t2;

    if (x1<x2)
        printf("First\n");
    else if (x2<x1)
        printf("Second\n");
    else
        printf("Friendship\n");
    return 0;
}