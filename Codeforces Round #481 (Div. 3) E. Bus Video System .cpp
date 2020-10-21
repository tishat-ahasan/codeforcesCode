#include<bits/stdc++.h>
using namespace std;

int main()
{

        long long int n,w;
        cin>>n>>w;
        vector<int> vec;
        long long int total=0;
        long long int i;
        long long int min = 0;
        long long int max = 0;
        long long int flag=1;
        for (i=0; i<n; i++)
        {
            long long int x;
            scanf("%lld",&x);
            total += x;
            if (total > w || (total*-1) > w) flag = 0;

            if (total<min) min = total;
            if (total > max) max = total;
            vec.push_back(x);
        }
        if (flag == 0) cout<<0<<endl;
        else{
                int ans = w-(max-min)+1;
        if (ans<0) ans = 0;
            cout<<ans<<endl;
        }

}