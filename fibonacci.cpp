#include<stdio.h>
int main()
{
	int n,n1 = 0,n2 = 1,r,i;
	printf("enter the range :");
	scanf("%d",&r);
	for (i = 2;i < r;i++) {
		n = n1 + n2;
		n1 = n2;
		n2 = n;
	}
	printf("fibonacci :%d",n);
}
