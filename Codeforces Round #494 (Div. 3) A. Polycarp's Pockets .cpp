#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int max =0;
    int i;
    int arr[101]={0};
    for (i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[x]++;
        if (arr[x]>max) max=arr[x];
    }
    cout<<max<<endl;
}