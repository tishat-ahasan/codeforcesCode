#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	scanf("%s",&s);
	int l;
	l=strlen(s);
	int flag=0,total=0;
	for (i=1;i<l;i++){
		if(s[i]==s[i-1]){
			flag++;
		}
		else{
			flag=0;
		}
		if (flag==6){
			total++;
		}
	}
	if (total>=1){
		printf("YES\n");
		
	}
	else 
	printf("NO\n");
	
	return 0;
	
}