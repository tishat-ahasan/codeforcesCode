#include<stdio.h>
int main()
{

    char a[1000001];
    int n,i,x=0,y=0;
    scanf("%d",&n);
    scanf("%s",a);
    for (i=0;a[i];i++){
        if (a[i]=='A')
            x++;
        else if (a[i]=='D')
            y++;
    }

    if (x==y)
        printf("Friendship\n");
   else if (x>y)
        printf("Anton\n");
    else if (x<y)
        printf("Danik");


    return 0;
}