#include<stdio.h>
int main()
{

    long long int a,b,c,d,count=0;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    int ca=0,cb=0,cc=0;

    if (a==b){
        count++;
        b=-1;
    }

    if (a==c){

        count++;
        c=-2;
    }

    if (a==d){
        count++;
        d=-3;
    }

    if (b==c){
        count++;
        c=-4;
    }
    if (b==d){
        count++;
        d=-5;
    }

    if (c==d){

        count++;
        d=-6;
    }


        printf("%d\n",count);

    return 0;
}