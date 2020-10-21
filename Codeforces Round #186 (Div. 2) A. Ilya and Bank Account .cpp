#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    scanf("%d",&a);
    if (a>0)
        printf("%d\n",a);
    else {

        int b,c;
        b=a/10;
        c=a/100*10 + a%10;
        printf("%d\n",max(b,c));
    }
    return 0;



}