#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int i=0;
    while (a-b<=0)
    {
        i++;
        a=3*a;
        b=2*b;
    }
    cout<<i<<endl;
    return 0;
}