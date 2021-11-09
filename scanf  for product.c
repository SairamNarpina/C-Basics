#include<stdio.h>
void main()
{
	int a,b,c,d,p;
	printf("Enter four numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	p=a*b*c*d;
	printf("product of %d,%d,%dand%dis:%d",a,b,c,d,p);
}
