#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[1001],b[1001];
    int count=0;
    int i,j,n,x,y;

    scanf("%d",&n);
    scanf("%s",&a);
    scanf("%s",&b);


    for (i=0;i<n;i++){

        if (a[i]>47 && a[i] <58 && b[i]>47 && b[i] <58 )
            {
                x= abs(a[i]-b[i]);
                y=abs(10-x);
            }


        count += min(x,y);



    }
    printf("%d\n",count);
    return 0;

}