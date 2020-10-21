#include<bits/stdc++.h>
using namespace std;
int main()
{

    char aa[500],bb[500];
    scanf("%s",aa);
    int i,j,flag=0;
    int n=strlen(aa);
    int preflag=1;
    //printf("%d\n",n);

    for (i=0,j=0;i<n-3;i++)
    {
        //printf("%d ",i);

        if(aa[i]=='W'&&aa[i+1]=='U'&&aa[i+2]=='B'){
            i=i+2;

            if (i>0 || i<n-2){
                bb[j]=' ';
                j++;
            }
        }
        else
        {

            bb[j]=aa[i];
            //printf("%c  ",bb[j]);
            j++;
        }
    }
    if(aa[i]=='W'&&aa[i+1]=='U'&&aa[i+2]=='B')
    bb[j]='\0';
    else{
        bb[j]=aa[i];
        bb[j+1]=aa[i+1];
        bb[j+2]=aa[i+2];
        bb[j+3]='\0';
    }

    printf("%s\n",bb);
    return 0;
}