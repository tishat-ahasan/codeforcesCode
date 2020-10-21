#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,tc,a,b;
    int i,j,k;
    //string s1,s2,s3;
    cin>>n;
    vector <int> vec;
    vector <int> :: iterator it;
    for (i=0;i<n;i++)
    {
        int x;
        cin>>x;
        it = find (vec.begin(),vec.end(),x);
        if (find(vec.begin(),vec.end(),x)!= vec.end()) vec.erase(it);
        vec.push_back(x);
    }
    int siz = vec.size();
    cout<<siz<<endl;

    for (i=0;i<vec.size();i++)
    {
        if (i==0) cout<<vec[i];
        else cout<<" "<<vec[i];
    }
    puts("");
    return 0;
}