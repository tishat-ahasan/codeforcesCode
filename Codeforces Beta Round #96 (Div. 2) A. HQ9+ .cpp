#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i,flag=0;
    char s[105];
    cin>>s;

    l=strlen(s);
    for(i=0;i<l;i++){
        if (s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            flag=1;
            break;
        }
    }


    if(flag==1)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}