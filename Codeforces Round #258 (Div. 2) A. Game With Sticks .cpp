#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,x;
    scanf("%d%d",&a,&b);
    x=min(a,b);
    if (x%2==1)
        printf("Akshat\n");
    else
        printf("Malvika\n");

    return 0;
}