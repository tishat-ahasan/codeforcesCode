#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,y[12];
    cin>>k;
    int i;
    for (i=0;i<12;i++)
    {
        scanf("%d",&y[i]);
    }
    sort(y,y+12);
    
    
    
    int j=0,m=0;
    for (i=11;i>=0;i--)
    {
        if (m>=k)
            break;
        
        m+=y[i];
        j=j+1;
    }
    if (m<k)
        cout<<-1<<endl;
    else
        cout<<j<<endl;
    return 0;
}