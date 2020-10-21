#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,max,min,a,i,count=0;
    scanf("%d",&n);
    scanf("%d",&a);
    min=a;
    max=a;
    for (i=1;i<n;i++){
        scanf("%d",&a);
        if (a>max){
            count++;
            max=a;
        }
        else if (a<min){
            count++;
            min=a;
        }
    }
    printf("%d\n",count);
    return 0;
}