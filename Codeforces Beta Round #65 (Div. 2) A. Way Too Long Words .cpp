#include<stdio.h>
#include<string.h>
int main()
{
	int a,b;
	char s[105];
	scanf("%d",&a);
	for (int i=1;i<=a;i++){
		scanf("%s",&s);
		b=strlen(s);
		
		if (b>10)
		printf("%c%d%c\n",s[0],b-2,s[b-1]);
		else 
		printf("%s\n",s);
	}
	return 0;
}