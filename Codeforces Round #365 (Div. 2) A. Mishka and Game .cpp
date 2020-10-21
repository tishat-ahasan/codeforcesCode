#include <stdio.h>

int main() {
	//code
	int n,i,a,b,n1=0,n2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d",&a,&b);
      if (a>b)
            n1++;
      if (b>a)
            n2++;
	}
if (n1>n2)
printf("Mishka\n");
else if (n2>n1)
printf("Chris\n");
else
printf("Friendship is magic!^^");
	return 0;
}