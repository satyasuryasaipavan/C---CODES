#include<stdio.h>
int main() {
	int n,i,sum = 0,r,fact = 1,p;
	printf("enter the value:");
	scanf("%d",&n);
	p = n;
	while (n != 0) {
		r = n % 10;
		while (r != 0) {
			fact = fact * r;
			r = r - 1;
		}
		sum = sum + fact;
		fact = 1;
		n = n / 10;
	}
	if (sum == p) {
		printf("strong number");
	}
	else {
		printf("not a strong number");
	}
}
