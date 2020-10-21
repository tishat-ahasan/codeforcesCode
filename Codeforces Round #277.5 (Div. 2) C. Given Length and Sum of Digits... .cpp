#include <iostream>
using namespace std;

int main() {
    int l,i,f=0,sum,arr[105]={0};
    cin>>l>>sum;
    int d=sum/9;
    int r=sum%9;
    if (l==1 && sum==0)
        cout<<"0 0"<<endl;
        
    else if((l>1 && sum==0)  || (l*9) < sum){
        cout<<-1<<" "<<-1<<endl;
    }
    
    else {
    if(d==l)
        {
            for(i=0;i<l;i++)
                cout<<9;
                cout<<endl;
        }
    else if(d+1==l){
        cout<<r;
        for(i=0;i<d;i++)
            cout<<9;
            cout<<endl;
    }
    else if (r>0){
        cout<<1;
        for(i=0;i<l-d-2;i++)
        cout<<0;
        int k=r-1;
        cout<<k;
        for(i=0;i<d;i++)
        cout<<9;
        cout<<" ";
    }
    
    else if (r==0)
    {
        cout<<1;
        for(i=0;i<l-d-1;i++)
        cout<<0;
        
        cout<<8;
        for(i=1;i<d;i++)
        cout<<9;
        cout<<" ";
    }
    
    if(l>=d){

        for(i=0;i<d;i++)
            arr[i]=9;
        arr[d]=r;
    }
    /*cout<<r;
    for(i=1;i<l-d;i++)
        cout<<0;
    for(i=0;i<d;i++)
        cout<<9;
        cout<<" ";*/
    
    
     for(i=0;i<l;i++)
        cout<<arr[i];
        cout<<endl;
    }
    
	return 0;
}