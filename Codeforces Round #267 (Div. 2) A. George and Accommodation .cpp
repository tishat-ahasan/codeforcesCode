#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=0;
    int a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if (b-a>=2)
            count++;
    }
    cout<<count<<endl;
    return 0;

}