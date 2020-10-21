#include<stdio.h>
int main()
{

    char a[101],b[101],c[201];
    int n1[26]={0},n2[26]={0};
    int i,j,k;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    int l;

    for(i=0;a[i];i++){
        n1[a[i]-65]++;
    }
    for (i=0;b[i];i++){
        n1[b[i]-65]++;
    }
    for (i=0;c[i];i++){
        n2[c[i]-65]++;
    }

    int flag=0;
    for (i=0;i<26;i++){
        if (n1[i] != n2[i]){
                flag=1;
        break;
        }

    }

    if (flag==0)
        printf("YES\n");
    else if (flag==1)
        printf("NO\n");
    return 0;
}