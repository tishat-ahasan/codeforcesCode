#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i,flag=0;
    char s[105];
    cin>>s;

    l=strlen(s);
    if(s[0]>96 )
    {
        for (i=1; i<l; i++)
        {
            if (s[i]>96)
            {
                flag=1;
                break;
            }
        }

        if (flag==0)
        {
            for ( i=1; i<l; i++)
            {
                s[i]=tolower(s[i]);
            }
            s[0]=toupper(s[0]);
        }
    }
    else if(s[0]<91  )
    {
        flag=0;
        for (i=1; i<l; i++)
        {
            if (s[i]>96)
            {
                flag=1;
                break;
            }
        }

        if (flag==0)
        {
            for (int i=0; i<l; i++)
            {
                s[i]=tolower(s[i]);
            }

        }
    }
    cout<<s<<endl;

}