#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a1=0,a2=0,a3=0,b1[15000],b2[15000],b3[15000];
    int u=0,v=0,w=0;
    scanf("%d",&n);
    int i,x;
    for (i=1;i<=n;i++){
        scanf("%d",&x);
        if (x==1){
            a1++;
            b1[u]=i;
            u++;

        }

        else if (x==2){
            a2++;
            b2[v]=i;
            v++;

        }
        else if (x==3){
            a3++;
            b3[w]=i;
            w++;

        }
    }

    int m=min(min(a1,a2),a3);

    if (m==0)
        printf("0\n");
    else
    {

        printf("%d\n",m);
        for (i=0;i<m;i++){
            printf("%d %d %d\n",b1[i],b2[i],b3[i]);
        }
    }
    return 0;
}