#include<bits/stdc++.h>
using namespace std;
#define MAX 55000
int n;
long long  ara[MAX];
char str[MAX];

int check()
{
    for(int i = 1; str[i]; i++)
        if(str[i] == str[i - 1] && str[i] == '1') return 0;
    return 1;
}

int main()
{
   cin>>n;
    scanf(" %s", str);
    int k = str[0] - '0';
    int f = check();

    for(int i = 0; str[i]; i++)
    {
        if(str[i] == '0')
        {
            str[i] = '1';
            f &= !check();
            str[i] = '0';
        }
    }
    if (f==0)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return 0;
}