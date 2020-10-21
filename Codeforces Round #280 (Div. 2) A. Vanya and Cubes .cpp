#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t=0,p=0,i=1;

    scanf("%d",&n);

    while (1){


        p = p + i;

        i++;

        n = n-p;

        if (n<0){
            break;
        }
        else
            t++;


    }

    printf("%d\n",t);
    return 0;


}