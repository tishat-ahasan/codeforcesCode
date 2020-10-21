#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int a,b,c,d;
    cin>>a>>b;
    if (a%2==0)
        c=a/2;

    else
        c=a/2+1;



    if (b<=c)
        d=b*2-1;

    else
        d=(b-c)*2;

    cout<<d<<endl;
    return 0;
}