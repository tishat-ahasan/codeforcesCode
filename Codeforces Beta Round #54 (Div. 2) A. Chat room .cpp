#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,flag=0,i;
    char s[105];
    cin>>s;
    l=strlen(s);
    for (i=0;i<l;i++){
        if (s[i]=='h'){
        flag++;
        break;
        }
    }
    for (i=i+1;i<l;i++){
        if (s[i]=='e'){
        flag++;
        break;
        }
    }
    for (i=i+1;i<l;i++){
        if (s[i]=='l'){
        flag++;
        break;
        }
    }
    for (i=i+1;i<l;i++){
        if (s[i]=='l'){
        flag++;
        break;
        }
    }
    for (i=i+1;i<l;i++){
        if (s[i]=='o'){
        flag++;
        break;
        }
    }

    if (flag==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}