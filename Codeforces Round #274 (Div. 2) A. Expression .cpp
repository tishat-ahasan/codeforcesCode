#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    int mul=a*b*c;
    int muladd=a*(b+c);
    int addmul=(a+b)*c;
    int add=a+b+c;

    if (mul>=muladd && mul>=addmul && mul>=add)
        cout<<mul<<endl;

    else if (muladd>=mul && muladd>=addmul && muladd>=add)
        cout<<muladd<<endl;

    else if (add>=mul&&add>=muladd&&add>=addmul)
            cout<<add<<endl;
    else
        cout<<addmul<<endl;
    return 0;
}