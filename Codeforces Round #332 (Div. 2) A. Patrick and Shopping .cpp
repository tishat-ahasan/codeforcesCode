#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a,b,c,d1,d2,d3,d4,ans;
    cin>>a>>b>>c;
    d1=2*(a+b);
    d2=a+b+c;
    d3=2*(a+c);
    d4=2*(b+c);
    ans=min(d1,min(d2,min(d3,d4)));
    cout<<ans<<endl;

    return 0;
}