#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,x,y;
    scanf("%d%d",&a,&b);
    x=min(a,b);
    y=max(a,b);
    printf("%d ",x);

    printf("%d\n",(y-x)/2);

    return 0;

}