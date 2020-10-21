#include<bits/stdc++.h>
using namespace std;

int test(int a){
    int x[4];
    x[0]=a%10;
    a=a/10;
    x[1]=a%10;
    a=a/10;
    x[2]=a%10;
    x[3]=a/10;

    int count=0;
    int flag=0,i,j;
    for(i=0;i<3;i++){
            flag=0;
            for (j=i+1;j<4;j++){
                if(x[i]==x[j]){
                    flag=1;
                    break;
                }
            }

            if (flag==0)
                count++;

    }

    return count+1;



}
int main(){

    int a,b;

    cin>>a;
    a=a+1;

    while(1){
        b=test(a);

        if (b==4){
            printf("%d\n",a);
            break;
        }
        else
            a=a+1;
    }

    return 0;
}