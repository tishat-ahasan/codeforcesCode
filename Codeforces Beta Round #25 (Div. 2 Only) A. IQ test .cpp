#include<stdio.h>
int main()
{
    int n,a[100],i,j,flag=0,count=0,odd=0,eve=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]%2==0)
            eve++;

        else odd++;
    }
    if (eve==1){
        for (i=0;i<n;i++){
            if(a[i]%2==0){
                printf("%d\n",i+1);
                break;
            }
        }
    }
    else {

         for (i=0;i<n;i++){
            if(a[i]%2==1){
                printf("%d\n",i+1);
                break;
            }
         }
    }
    return 0;

}
 