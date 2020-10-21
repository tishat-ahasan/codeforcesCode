#include<stdio.h>
int main(){

    char aa[256];
    int len,a=0,c=0,g=0,t=0;
    scanf("%d",&len);
    scanf("%s",aa);

    int x=len/4;
    int i;
    for (i=0;i<len;i++){

        if (aa[i]=='A')
            a++;
        else if (aa[i]=='C')
            c++;
        else if (aa[i]=='G')
            g++;
        else if (aa[i]=='T')
            t++;
    }



    a=x-a;
    c=x-c;
    g=x-g;
    t=x-t;

     if (len%4 != 0 || a<0 || c<0 || g<0 || t<0)
        printf("===\n");
     else {

        for (i=0;i<len;i++){

            if (aa[i]=='?'){

                if (a>0){
                    aa[i]='A';
                    a--;
                }
                else if (c>0){
                    aa[i]='C';
                    c--;
                }
                else if (g>0){
                    aa[i]='G';
                    g--;

                    }
                else if (t>0){
                    aa[i]='T';
                    t--;
                }
            }
        }

        printf("%s\n",aa);

     }


    return 0;
}
 