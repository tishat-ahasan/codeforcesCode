#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n,a,i,total=0;
    scanf("%lld",&n);
    for (i=1;i<=n;i++){
        total += i*(n-i)+1;
    }

    printf("%lld\n",total);
    return 0;
}