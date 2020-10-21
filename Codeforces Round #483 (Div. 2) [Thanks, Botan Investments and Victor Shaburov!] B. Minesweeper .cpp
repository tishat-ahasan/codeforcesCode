#include<bits/stdc++.h>
using namespace std;
vector<string> grid;
int row,col;
int x[] = {1,1,0,-1,-1,-1,0,1};
int y[] = {0,1,1, 1,0,-1,-1,-1};

bool check_no_bomb(int r,int c)
{
    int i;
    int flag = 0;
    for (i=0; i<8; i++)
    {
        int row1 = r+x[i];
        int col1 = c+y[i];
        if (row1 >= 0 && col1>= 0 && row1<row && col1<col)
        {
            if (grid[row1][col1] == '*')
            {
                flag = 1;
                break;
            }
        }
    }
    if (!flag) return true;
    else return false;
}


bool check_bomb(int r,int c,int bomb)
{
    int i;
    int flag = 0;
    for (i=0; i<8; i++)
    {
        int row1 = r+x[i];
        int col1 = c+y[i];
        if (row1 >= 0 && col1>= 0 && row1<row && col1<col)
        {
            if (grid[row1][col1] == '*')
            {
                bomb--;
            }
        }
    }
    if (bomb == 0) return true;
    else return false;
}

int main()
{

    cin>>row>>col;
    for (int i=0; i<row; i++)
    {
        string s1;
        cin>>s1;
        grid.push_back(s1);
    }
    int i,j;
    int result;
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            if (grid[i][j] == '.')
            {
                bool flag = check_no_bomb(i,j);
                if (flag == false)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }

            else if (grid[i][j] == '*') continue;
            else
            {
                bool flag = check_bomb(i,j,grid[i][j]-48);

                if (flag == false)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }

            }

            }
    }

    cout<<"YES"<<endl;

    return 0;
}