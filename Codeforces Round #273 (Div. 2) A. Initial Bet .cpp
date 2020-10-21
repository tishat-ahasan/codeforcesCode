#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,d,e,x;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    x=a+b+c+d+e;
    if (x%5==0 && x >=5)
        printf("%d\n",x/5);
    else
        printf("-1\n");

    return 0;
}