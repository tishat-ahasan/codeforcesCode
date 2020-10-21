#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,min=10000;
    cin>>n;
    int i;
    long long int total=0;
    for (i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if (b<min)
            min=b;
            
        total+=a*min;
    }
    cout<<total<<endl;
}