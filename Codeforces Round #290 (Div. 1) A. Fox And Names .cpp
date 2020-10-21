#include<bits/stdc++.h>
using namespace std;
vector <int> adj[30];
int visit [30];
int stkk[30];
bool flag1;
stack<char>stk;
void DFS(int s)
{
    if (visit[s] == 0)
    {
        visit[s] = 1;
        stkk[s] = 1;
        int i;
        for (i=0; i<adj[s].size(); i++)
        {
            int v = adj[s][i];
            if (visit[v] && stkk[v]) flag1= true;
            if (visit[v]==0) DFS(v);
        }
        stkk[s] = false;
        stk.push(s+'a');

    }


}
int main()
{
    int n;
    cin>>n;

    int i;
    vector<string>ss;
    for (i=0; i<n; i++)
    {
        string s;
        cin>>s;
        ss.push_back(s);
    }
    int flag = 0;
    for (i=0; i<n-1; i++)
    {
        string a = ss[i];
        string b = ss[i+1];
        int j;
        int lena = a.size();
        int lenb = b.size();
        int total=0;
        for (j=0; j<min(lena,lenb); j++)
        {
            if (a[j] == b[j])
            {
                total++;
                continue;
            }
            if (a[j] != b[j])
            {
                int u = a[j] - 'a';
                int v = b[j] - 'a';
                adj[u].push_back(v);
                break;
            }
        }
        if (a.size() > b.size() && total== min (lena,lenb))
        {
            flag = 1;
            break;
        }

    }

    if (flag)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    for (i=0; i<26; i++)
    {
        DFS(i);
    }
    if (flag1)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }

    while (!stk.empty())
    {
        char a = stk.top();
        stk.pop();
        cout<<a;
    }
    puts("");
    return 0;


}