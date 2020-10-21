#include<bits/stdc++.h>
using namespace std;
int main() {
    char a[1050][10];
    int n,i,flag=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%s",a[i]);
    }
     for (i=0;i<n;i++){
        if (a[i][0]=='O' && a[i][1]=='O')
        {
            a[i][0]='+';
            a[i][1]='+';
            flag=1;
            break;
        }
        else if (a[i][3]=='O' && a[i][4]=='O')
        {
            a[i][3]='+';
            a[i][4]='+';
            flag=1;
            break;
        }

    }
    if(flag==1){
            printf("YES\n");
    for (i=0;i<n;i++){
        printf("%s\n",a[i]);
    }
    }
    else
        printf("NO\n");
    return 0;
}