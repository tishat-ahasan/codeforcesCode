#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    vector<int> vec;
    vector<int>:: iterator it;
    int i;
    cin>>a;
    a += 1;
    if (a==1) cout<<0<<endl;
    else if (a%2==0)
        cout<<a/2<<endl;
    else cout<<a<<endl;
    return 0;
}