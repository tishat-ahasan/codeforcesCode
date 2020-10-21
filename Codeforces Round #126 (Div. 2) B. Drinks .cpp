#include<bits/stdc++.h>
using namespace std;
int main()
{

    double n,a,total=0,i;
    scanf("%lf",&n);
    for (i=0;i<n;i++){
        scanf("%lf",&a);
        total +=a;
    }
    printf("%.12lf",total/n);
    return 0;
}