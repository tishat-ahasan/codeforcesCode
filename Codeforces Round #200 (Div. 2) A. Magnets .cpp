#include<stdio.h>
int main()
{

    int n,i;
    char aa[3],bb[3];
    scanf("%d",&n);
    scanf("%s",aa);
    if (n==1)
        printf("1\n");
    else {
            int count=1;
        for (i=1;i<n;i++){
            scanf("%s",bb);

            if (aa[1]== bb[0]){
                count++;
                aa[0] = bb[0];
                aa[1]=bb[1];
            }
        }
        printf("%d\n",count);
    }

    return 0;
}