#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a = n;
    int b = n-1;
    int t = n/2;
    vector<int> arr;
    for (i=0;i<t;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    int total1 = 0;
    int total2 = 0;
    for (i=t-1;i>=0;i--)
    {
        total1 += abs (a-arr[i]);
        a -= 2;
    }
    for (i=t-1;i>=0;i--)
    {
        total2 += abs (b-arr[i]);
        b -= 2;
    }
    cout<<min(total1,total2)<<endl;
}
 