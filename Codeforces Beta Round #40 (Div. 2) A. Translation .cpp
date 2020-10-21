#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    int i,j,flag=0;
    scanf("%s",a);
    scanf("%s",b);
    if (strlen(a) != strlen(b))
        flag=1;
    else {

        j=strlen(a);
        for (i=0;i<j;i++){
            if (a[i] != b[j-i-1]){
                flag=1;
                break;
            }
        }
    }
    if (flag==0)
        printf("YES\n");

    else
        printf("NO\n");
    return 0;
}