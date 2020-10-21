#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s1;
    cin>>n;
    cin>>s1;
    int i;
    int count = 0;
    int total = 0;
    for (i=0;i<n;i++)
    {
        if (s1[i]=='x') count++;
        else count = 0;

        if (count == 3) {
            total++;
            count = 2;
        }
    }
    cout<<total<<endl;
    return 0;
}