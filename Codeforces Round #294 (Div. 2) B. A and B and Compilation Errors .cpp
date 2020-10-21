#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[100000];
    int b[100000];
    int c[100000];

    cin>>n;
    int i;
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);

    for (i=0;i<n-1;i++)
        scanf("%d",&b[i]);

        b[i]=0;

    for (i=0;i<n-2;i++)
        scanf("%d",&c[i]);

        c[i]=0;
        c[i+1]=0;
   
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);
    
    
     for (i=0;i<n;i++)
    {
        if (a[i] != b[i+1]){
            printf("%d\n",a[i]);
            break;
        }
    }
    
      for (i=0;i<n;i++)
    {
        if (b[i] != c[i+1]){
            printf("%d\n",b[i]);
            break;
        }
    }
        return 0;

}