#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,t,i;
    char s[55],temp ;
    cin>>n>>t>>s;
    while(t--){

        for(i=0;i<n;i++){
        if (s[i]=='B' && s[i+1]=='G'){
            temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
            i++;
        }
    }
    }

    cout<<s<<endl;
}
 