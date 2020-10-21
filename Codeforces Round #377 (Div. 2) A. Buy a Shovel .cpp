#include<bits/stdc++.h>
using namespace std;
int main(){
    int cost,mi;

    scanf("%d%d",&cost,&mi);
    int i,a,b;
    for (i=1;;i++){

        a=(cost*i)%10;
        b=(cost*i-mi)%10;
        if (a==0 || b==0)
            break;
    }
    printf("%d\n",i);
    return 0;


}