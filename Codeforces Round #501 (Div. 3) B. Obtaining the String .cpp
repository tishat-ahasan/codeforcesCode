#include<bits/stdc++.h>
using namespace std;
int arr1[26];
int arr2[26];
vector <int> ans;
int main()
{
    int n;
    cin>>n;
    int j;
    string s1,s2;
    cin>>s1>>s2;
    int i;
    for (i=0;i<n;i++)
    {
        int x1 = s1[i]-'a';
        int x2 = s2[i]-'a';
        arr1[x1]++;
        arr2[x2]++;
    }

    int flag = 0;
    for (i=0;i<26;i++)
    {
        if (arr1[i] != arr2[i]) {
        flag = 1;
        break;
        }
    }

    if (flag) {
        cout<<-1<<endl;
        return 0;

    }
    int total = 0;
    for (i=0;i<n;i++)
    {
        char c1,c2;
        c1 = s1[i];
        c2 = s2[i];

        if (c1 == c2) continue;

        else
        {
            int pos;
            for (j=i;j<n;j++)
            {
                if (s1[j] == c2) {
                    pos = j;
                    break;
                }
            }

            for (j=pos;j>i;j--)
            {
                ans.push_back(j);
                swap (s1[j],s1[j-1]);
            }

        }
    }

    //cout<<ans.size()<<endl;
    //cout<<s1<<endl<<s2<<endl;

    cout<<ans.size()<<endl;
    for (i=0;i<ans.size();i++)
    {
        if (i==0) cout<<ans[i];
        else
        cout<<" "<<ans[i];
    }
    if (ans.size() != 0)
    puts("");


    return 0;
}