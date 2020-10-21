#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int link=0,parl=0;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]== '-' ) link++;
        else parl++;
    }
    //cout<<link<<" "<<parl;
    if (parl==0) cout<<"YES"<<endl;
    else if ( link%parl == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;

}