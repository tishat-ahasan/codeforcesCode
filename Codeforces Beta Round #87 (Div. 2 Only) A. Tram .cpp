#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n,enter1=0,exit1=0,enter2=0,exit2=0,pass;
    cin >> a;
    n=a-1;
    int max=0;
    cin>>exit1>>enter1;
    if(max<enter1)
        max=enter1;
    while(n>0){

        cin>>exit2>>enter2;
        n=n-1;

        pass=enter1-exit2+enter2;
        enter1=enter1-exit2+enter2;

        if (pass>max)
            max=pass;
    }

    cout<<max<<endl;

    return 0;
}