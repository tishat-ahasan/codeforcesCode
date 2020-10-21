#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a,t=0,rem;
    cin>>n;
    rem=n;

    while (1)
    {
         if (rem==1)
        {
            t++;
            break;
        }
        if (rem<=0)
            break;
        a=log2(rem);
        rem -= pow(2,a);
        t++;
    }
    cout<<t<<endl;

}
 