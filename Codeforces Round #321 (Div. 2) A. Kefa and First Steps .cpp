#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int a[100000],i,j,k,n;
    scanf("%lld",&n);


    scanf("%lld",&a[0]);




    int max=0,count=0;
    for (i=1;i<n;i++){

        scanf("%lld",&a[i]);

        if(a[i]>= a[i-1])
            count++;

        else if (a[i]<a[i-1]){
            count=0;
        }


            if (count>max)
                max=count;
    }

    printf("%lld\n",max+1);



}