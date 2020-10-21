#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[100][3],i,j,n;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        for (j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }


    int flag=0;
    int count=0;
    for (j=0;j<3;j++){
            count=0;
        for (i=0;i<n;i++){
            count+=a[i][j];
        }
        if (count!=0){
            flag=1;
            break;
        }
    }

    if (flag==0)
        cout<<"YES"<<endl;
    else if (flag==1)
        cout<<"NO"<<endl;
    return 0;
}