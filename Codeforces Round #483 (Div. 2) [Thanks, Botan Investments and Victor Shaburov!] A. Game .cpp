#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string s1,s2;
    int total = 0;
    int i;
    cin>>n;
    vector<int> vec;
    for (i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    if (n%2 == 1)
    {
        cout<<vec[n/2]<<endl;
    }
    else
        cout<<vec[(n/2)-1]<<endl;
    return 0;
}
 