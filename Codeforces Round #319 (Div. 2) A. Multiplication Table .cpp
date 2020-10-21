#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,t=0;
    cin>>n>>x;
    if (x>n*n)
        cout<<0<<endl;
    else if (x==1)
        cout<<1<<endl;
    else
    {
        int i;
        long long int l=sqrt(x);
        long long int h=ceil(double(x)/double(n));
        for (i=h;i<=l;i++)
        {
            if(x%i==0)
            {
                t++;
                if ((x/i)<=(n*n) && (x/i)!=i)
                    t++;
            }
        }
        cout<<t<<endl;
    }


}

 