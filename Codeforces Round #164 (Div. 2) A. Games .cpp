#include<stdio.h>
int main()
{

    int n,a[35],b[35],count=0,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }

    for (i=0;i<n-1;i++){
        for (j=i;j<n;j++){
            if (a[i]==b[j])
                count++;

            if (b[i]==a[j])
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}