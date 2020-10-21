#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[5][5],i,j,i1,j1;
    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>a[i][j];
            if (a[i][j]==1){
                i1=i+1;
                j1=j+1;
            }
        }
    }


    int move= abs(3-i1)+abs(3-j1);
    cout<<move<<endl;
    return 0;
}