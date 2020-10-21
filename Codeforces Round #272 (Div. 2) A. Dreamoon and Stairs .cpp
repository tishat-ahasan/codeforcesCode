#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if (m>n)
        cout<<-1<<endl;
    else {

        int ans=ceil(double(n)/2);
        while(1)
        {
            if (ans%m==0)
                break;
            else
                ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}