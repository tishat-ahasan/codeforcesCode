#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,total=0,m1=0,m2=0,m3=0;
    cin>>n;
    while(n--){
        cin>>a;
        if(a==4)
            total++;
        else if (a==3)
            m3++;
        else if (a==2)
            m2++;
        else if (a==1)
            m1++;
    }

    total += m2/2;
    total+=m2%2;

    if (m3>=m1){
        total += m1;
        total += m3-m1;
    }

    else if (m3<m1){
        total+= m3;
        m1 = m1-m3;

         if(m2%2==1 && m1>2){
            m1=m1-2;
            total += (m1/4);
            if (m1%4 != 0)
                total++;
        }
        else if (m2%2== 0){
            total += (m1/4);
            if (m1%4 != 0)
                total++;

        }
    }

    cout<<total<<endl;

    return 0;
}