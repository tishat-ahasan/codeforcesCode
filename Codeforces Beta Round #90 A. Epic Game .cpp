#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{

    if (a<b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    while (a%b !=0)
    {
        int c=a;
        a=b;
        b=c%b;
    }

    return b;

}


int main()
{

    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);


    int i=0;


    while(1)
    {

        d=gcd(a,c);
        c=c-d;
        i++;


         if (c<=0)
            break;


        d=gcd(b,c);
        c=c-d;
        i++;




        if (c<=0)
            break;


    }

    if (i%2==1)
        printf("0\n");
    else
        printf("1\n");

    return 0;


}