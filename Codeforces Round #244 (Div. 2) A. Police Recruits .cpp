#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,total=0,count=0,i;

    scanf("%d",&n);

    for (i=1;i<=n;i++){
        scanf("%d",&a);

        total += a;


        if (a == -1){
        if (total<0){
            count++;
            total=0;

        }
        }

    }
    printf("%d\n",count);
    return 0;

}