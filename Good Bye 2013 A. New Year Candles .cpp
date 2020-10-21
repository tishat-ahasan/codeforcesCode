#include<stdio.h>
int main()
{

    int a,b,total;
    scanf("%d%d",&a,&b);
    total=a;
    while(a/b>0){

        total=total+(a/b);
        a=(a/b)+(a%b);
    }
    printf("%d\n",total);
    return 0;
}