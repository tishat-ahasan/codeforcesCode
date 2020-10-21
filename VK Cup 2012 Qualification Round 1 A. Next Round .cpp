#include<stdio.h>
int main()
{

    int a,b,s[53],i;
    scanf("%d%d",&a,&b);
    int count=0;
    for (i=0;i<a;i++){
        scanf("%d",&s[i]);
        if (i<b && s[i] >0){

            count++;
        }

        if (i>b-1 && s[i]== s[b-1] && s[i] > 0){
            count++;
        }


    }
    printf("%d\n",count);
    return 0;
}