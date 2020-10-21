#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n>>s;
        int total=0;
    for(int i=0;i<n-1;i++){
        if (s[i] == s[i+1]){
            total++;
        }
    }
    cout<<total<<endl;

    return 0;


}