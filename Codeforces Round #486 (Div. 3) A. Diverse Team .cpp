#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    map<int,int> mp;
    cin>>n>>k;
    int i;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x] = i+1;
    }

    if (mp.size() < k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        map<int,int>:: iterator it;
        for (i=0,it = mp.begin();i<k;i++,it++)
        {
            if (i == k-1)
            {
                cout<<(*it).second<<endl;
            }
            else
            {
                cout<<(*it).second<<" ";
            }
        }
    }
    return 0;
}