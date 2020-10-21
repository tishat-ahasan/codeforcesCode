#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,mod,ans,power;
    scanf("%lld%lld",&n,&mod);
    if (n<32)
    {
        power=(pow(2,n));
        ans=(mod)%power;
        cout<<ans<<endl;
    }
    else
        cout<<mod<<endl;
    return 0;
}