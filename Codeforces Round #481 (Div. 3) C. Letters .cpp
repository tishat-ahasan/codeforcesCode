#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    vector <long long int> vec;
    vector <long long int>:: iterator it;
    long long int total=0;
    vec.push_back(0);
    cin>>n>>m;
    int i;
    for (i=0;i<n;i++)
    {
        long long int x;
        scanf("%lld",&x);
        total+=x;
        vec.push_back(total);
    }

    vector <long long int> q;
    long long int a;
    while(m--)
    {
        cin>>a;
        q.push_back(a);
    }


    for (i=0;i<q.size();i++)
    {
        int index = lower_bound(vec.begin(),vec.end(),q[i]) - vec.begin();
        //cout<<index<<" ";
        cout<<index<<" "<<q[i] - vec[index-1]<<endl;
        //else cout<<index<<" "<<()<<endl;
    }
   /* for (i=0;i<q.size();i++)
    {
        cout<<q[i]<<" ";
    }*/
    
}