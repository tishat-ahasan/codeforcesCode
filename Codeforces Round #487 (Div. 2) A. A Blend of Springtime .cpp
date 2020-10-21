#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    int flagA = 0;
    int flagB = 0;
    int flagC = 0;
    char s1[] = "ABC";
    char s2[] = "ACB";
    char s3 []= "BAC";
    char s4 []= "BCA";
    char s5 []= "CAB";
    char s6 []= "CBA";
    int i;


        if (strstr(s, s1) != NULL || strstr(s, s2) != NULL || strstr(s, s3) != NULL || strstr(s, s4) != NULL || strstr(s, s5) != NULL || strstr(s, s6) != NULL)
            //printf("%s not in %s", st2, st1);
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    return 0;
}