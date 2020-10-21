#include<bits/stdc++.h>
using namespace std;
int main()
{

     long long int w,k,n,sum,need;
    cin>>k>>n>>w;
    sum=(w*(w+1))/2;
    sum=sum*k;
    need=sum-n;
    if(need>=0)
    cout<<need<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}