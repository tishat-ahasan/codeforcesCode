#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[105];
    cin>>n;
    int total=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        total+=a[i];
    }

    sort(a,a+n);
    int max=0;
    int count=1;
    for(i=n-1; i>=0; i--)
    {
        max+=a[i];


        if (max>total/2)
            break;

        count++;
    }
    cout<<count<<endl;
    return 0;
}