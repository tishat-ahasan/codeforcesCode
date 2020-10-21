#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j;
    int a,b,c,d,t;
    int count=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&t);
    for (i=1;i<=t;i++){
        if (i%a==0 || i%b==0 || i%c==0 || i%d==0)
            count++;
    }
    printf("%d\n",count);
    return 0;
}