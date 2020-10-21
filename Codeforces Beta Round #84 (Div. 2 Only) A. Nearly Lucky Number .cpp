#include<bits/stdc++.h>
using namespace std;
int main()
{

     long long int s;
     int l,i;
     cin>>s;

     int flag=0;
     while(s!=0){

        if(s%10==4 || s%10==7 ){
            flag++;
        }

        s/=10;
     }
     if (flag == 4|| flag == 7)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;

     return 0;
}