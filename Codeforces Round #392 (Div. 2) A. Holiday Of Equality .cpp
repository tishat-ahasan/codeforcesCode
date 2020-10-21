#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[1000],total=0,max=0;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
        total+=a[i];
        if (max<a[i])
            max=a[i];
    }
    cout<<(max*n)-total<<endl;
    return 0;
}