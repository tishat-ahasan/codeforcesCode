#include<bits/stdc++.h>
using namespace std;
int main()
{

    char s[105];
    char news[27]="11111111111111111111111111";
    cin>>s;
    int flag=0,i,j,k=0;
    int l=strlen(s);
    int count=0;
    for (i=0; i<l; i++)
    {
        for (j=0; j<27; j++)
        {
            if (s[i]==news[j])
            {
                flag=1;
                break;
            }

        }
        if (flag==0)
        {
            news[k++]=s[i];
            count++;
        }
        else if (flag==1)
            flag=0;
    }


    if (count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}