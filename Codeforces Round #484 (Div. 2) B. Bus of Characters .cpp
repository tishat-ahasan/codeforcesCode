#include<bits/stdc++.h>
using namespace std;

struct faka{

    int row;
    int width;
    bool operator <(const faka &rhs ) const
    {
        if (width > rhs.width) return true;
        else return false;
    }
};

struct one{

    int row;
    int width;
    bool operator <(const one &rhs ) const
    {
        if (width < rhs.width) return true;
        else return false;
    }
};


int main()
{
    int n;
    cin>>n;
    priority_queue<faka> pq;
    priority_queue<one> pq1;
    for (int i=0;i<n;i++)
    {
        struct faka temp;
        cin>>temp.width;
        temp.row = i+1;
        pq.push(temp);
    }

//    while(!pq.empty())
//    {
//        struct faka temp;
//        temp = pq.top();
//        pq.pop();
//        cout<<temp.row<<"  "<<temp.width<<endl;
//    }


    string s1;
    cin>>s1;

    for (int i=0;i<s1.size();i++)
    {
        if (s1[i]=='0')
        {
            struct faka temp;
            temp = pq.top();
            pq.pop();
            cout<<temp.row;
            struct one temp1;
            temp1.width = temp.width;
            temp1.row = temp.row;
            pq1.push(temp1);
        }

        else
        {
            struct one temp;
            temp = pq1.top();
            pq1.pop();
            cout<<temp.row;
        }

        if (i!= s1.size()-1) cout<<" ";
    }
    puts("");
    return 0;
}
 