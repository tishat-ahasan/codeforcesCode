#include<stdio.h>
int main(){
    int n,a[100],i,b[100];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]-1]=i+1;
    }
    for (i=0;i<n-1;i++)
        printf("%d ",b[i]);
        printf("%d\n",b[i]);
    return 0;

}