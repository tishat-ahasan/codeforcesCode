#include<bits/stdc++.h>
using namespace std;
int main(){
    int d,n;
    scanf("%d%d",&d,&n);

    int i;

    if (d==1 && n==10)
        printf("-1\n");

    else{
    for (i=1;i<d;i++){
            if(n<10)
                printf("%d",n);
            else
                 printf("%d",5);
    }
    if (n<10){
        printf("%d\n",n);
    }
    else
        printf("0\n");

    }

    return 0;


}