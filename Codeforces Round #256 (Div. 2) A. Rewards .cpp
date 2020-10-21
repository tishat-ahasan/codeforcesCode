#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,s;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>s;
    int cups,medals;

    cups=a1+a2+a3;
    medals=b1+b2+b3;

    cups= ceil(double(cups)/5);
    medals = ceil(double(medals)/10);

    if (s>=(cups+medals))
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;



    return 0;
}