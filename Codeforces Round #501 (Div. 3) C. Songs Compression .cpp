#include<bits/stdc++.h>
using namespace std;
struct box {
    int a;
    int com;
};

bool comp(struct box l,struct box r)
{
    if (l.com > r.com) return true;
    return false;
}

int main()
{
    int n,sz;
    int i;
    cin>>n>>sz;
    long long int total = 0;
    vector <box> arr;
    for (i=0;i<n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        total+=a;
        box temp;
        temp.a=a;
        temp.com = a-b;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(),comp);

//    for (i=0;i<arr.size();i++)
//    {
//        cout<<arr[i].a<<"  "<<arr[i].com<<endl;
//    }
    for (i=0;i<arr.size();i++)
    {
        if (total <= sz) break;

        total -= arr[i].com;
    }
    if (total <= sz) cout<<i<<endl;
    else cout<<-1<<endl;

}