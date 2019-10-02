#include<stdio.h>
int main()
{
	int n,i = 0,a[100];
	printf("enter the decimal :");
	scanf("%d",&n);
	while (n != 0) {
		  a[i] = n % 2;
		  i ++;
		  n /= 2;
	}
	
	while (i > 0) {
		  i --;
		  printf("%d",a[i]);
	}

}

