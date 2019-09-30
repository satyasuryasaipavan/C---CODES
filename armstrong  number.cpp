#include<stdio.h>
int main() {
	int n,i,sum = 0,r,mul = 1,p,k,count = 0;
	printf("enter the value:");
	scanf("%d",&n);
	p = n;
	k = n;
	while (n != 0) {
		count = count + 1;
		n = n / 10;
	}
	while (p != 0) {

    	for (i = 1;i <= count;i++) {
		mul = mul * (p % 10);
	    }
		sum = sum + mul;
		mul = 1;
		p = p / 10;
	}
	if (sum == k) {
		printf("armstrong number");
	}
	else {
		printf("not a armstrong number");
	}
}
