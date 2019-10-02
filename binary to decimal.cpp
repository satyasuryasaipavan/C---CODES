#include<stdio.h>
int main()
{
	int r,n,i,count = 0,mul = 1,sum = 0;
	printf("enter the number:");
	scanf("%d",&n);
	while (n != 0) {
	      r = n % 10;
	      count = count + 1;
	      for ( i = 1;i < count;i++) {
	      	   mul = mul * 2;
	      }
		  sum =  sum + (mul * r);
		  mul = 1;
	      n = n / 10;
	}
	printf("\n%d",sum);
}

