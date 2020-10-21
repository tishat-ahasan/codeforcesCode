#include<stdio.h>
int main()
{

    int a[100]={0},n,x,y;
    scanf("%d",&n);
    scanf("%d",&x);
    int i,d;
    for (i=0;i<x;i++){
        scanf("%d",&d);
        a[d-1]=1;
    }
    scanf("%d",&x);
    for (i=0;i<x;i++){
        scanf("%d",&d);
        a[d-1]=1;
    }
    int flag=0;
    for (i=0;i<n;i++){

        if(a[i]==0){
            flag=1;
            break;
        }

    }

     if (flag==0)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");



    return 0;
}