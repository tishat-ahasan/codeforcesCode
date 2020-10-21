#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,i;
    scanf("%d%d",&a,&b);
    int min=240-b;
    int count=0;
    for (i=1;i<=a;i++){
        min -=i*5;
        if (min>=0)
            count++;
        else
            break;
    }

    printf("%d\n",count);

    return 0;

}