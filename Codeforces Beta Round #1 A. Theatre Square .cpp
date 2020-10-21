#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,e;
	scanf("%lf%lf%lf",&a,&b,&c);
     d= ceil (a/c);
     e= ceil (b/c);
	
	
	printf("%.0lf\n",d*e);
	return 0;
}