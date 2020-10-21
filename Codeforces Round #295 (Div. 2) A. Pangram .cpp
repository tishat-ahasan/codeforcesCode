#include<stdio.h>
#include<string.h>
int main()
{

    char a[101];
    int i,j,k,b[26]={0};

    int dump;
    scanf("%d",&dump);
    scanf("%s",a);
    strlwr(a);


    for (i=0;i<dump;i++){
    b[a[i]-97]=1;
    }
    int flag=0;
    for (i=0;i<26;i++){
        if (b[i]==0){
            flag=1;
            break;
        }
    }


    if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}