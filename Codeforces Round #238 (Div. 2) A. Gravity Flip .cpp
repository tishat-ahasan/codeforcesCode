#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[100],n,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,a+n);

    for (i=0;i<n-1;i++)
        printf("%d ",a[i]);

    printf("%d\n",a[i]);

    return 0;
}