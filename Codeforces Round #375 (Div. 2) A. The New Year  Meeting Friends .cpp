#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,x,y;
    scanf("%d%d%d",&a,&b,&c);
    x=max(max(a,b),c);
    y=min(min(a,b),c);

    printf("%d\n",x-y);
    return 0;
}