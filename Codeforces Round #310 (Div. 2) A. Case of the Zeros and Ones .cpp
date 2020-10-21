#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000000];
    int n,i,sum,t=0;
    cin>>n;
    scanf("%s",&a);
    for (i=0;i<n;i++)
    {
        if(a[i]=='0')
            t++;
        else if (a[i]=='1')
            t--;
    }
    cout<<abs(t)<<endl;
}