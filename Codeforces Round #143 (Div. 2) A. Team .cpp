#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c;
	int flag=0;
	cin>>n;
	while(n--){
		cin>>a>>b>>c;
		if (a+b+c >= 2)
		flag++;
		
	}
	cout<<flag<<endl;
	return 0;
}