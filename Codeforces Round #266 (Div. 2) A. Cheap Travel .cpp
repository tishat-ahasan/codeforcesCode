#include<stdio.h>
int main()
{

    int n,m,a,b;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    int cost1,cost2;
    cost1= n*a;
    if (m>=n && b<cost1)
        cost2=b;

    else if (b>a)
    cost2= ((n/m)*b) + ((n%m)*a);
    else
    {


         if (n%m==0)
            cost2=((n/m)*b);
        else
            cost2=((n/m)*b)+b;
    }

    if (cost1<=cost2)
        printf("%d\n",cost1);
    else
        printf("%d\n",cost2);
    return 0;
}