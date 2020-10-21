#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag=0,n;
	char s[6];
	
	cin >>n;
	while(n--){
		scanf("%s",&s);
		if (s[0] =='+' || s[1]=='+')
		flag++;
		else 
		flag--;
	}
	printf("%d\n",flag);
	
	return 0;
	
}