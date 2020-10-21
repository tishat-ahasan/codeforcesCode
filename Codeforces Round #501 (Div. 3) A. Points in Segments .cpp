#include<bits/stdc++.h>
using namespace std;
int arr[10000];
vector <int> ans;
int main()
{
    int n,f;
    cin>>n>>f;
    int i,j;
    for (i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        for (j=a;j<=b;j++)
        {
            arr[j]++;
        }

    }

    for (i=1;i<=f;i++)
    {
        if (arr[i]==0) ans.push_back(i);
    }

    cout<<ans.size()<<endl;
    for (i=0;i<ans.size();i++)
    {
        if (i==0) cout<<ans[i];
        else
        cout<<" "<<ans[i];
    }
    if (ans.size() != 0)
    puts("");


    return 0;
}