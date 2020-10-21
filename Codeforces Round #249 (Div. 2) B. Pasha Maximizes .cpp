#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long tem, num,k;
    cin>>num>>k;
    tem=num;
    double d;
    if (num==1) d = 1;
    else
    d =ceil ( log10(num));
    int i,j;
    int arr[100];
    for (i=d-1;i>=0;i--)
    {
        arr[i] = tem%10;
        tem = tem/10;
    }

//    for (i=0;i<d;i++)
//    {
//        cout<<arr[i];
//
//    }

 for(int i=0 ; i<d;i++)
{
    int temp = i;

    for( int j = i+1 ;j<d&& j-i<=k ;j++)
        if(arr[j] > arr[temp] )
             temp = j;

for(int y = temp ; y>i ;y--)
    swap(arr[y] , arr[y-1]);

k -=temp-i;

}

     for (i=0;i<d;i++)
    {
        cout<<arr[i];

    }
    puts("");

return 0;
}