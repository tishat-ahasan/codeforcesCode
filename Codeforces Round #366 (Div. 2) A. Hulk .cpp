#include<bits/stdc++.h>
int main()
{

    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){

            if (i==1)
            printf("I hate ");
            else {
                if (i%2==0)
                    printf("that I love ");
                else
                    printf("that I hate ");
            }

    }
    printf("it\n");
    return 0;
}