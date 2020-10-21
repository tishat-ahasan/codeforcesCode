#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b;
    cin>>a;
    b=(a+1)/2;
    if (a&1)
        printf("-%lld\n",b);
    else
        printf("%lld\n",b);

    return 0;

}