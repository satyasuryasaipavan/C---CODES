#include<stdio.h>
int main() {
	int n,rev = 0;
	printf("enter the value:");
	scanf("%d",&n);
	while (n != 0) {
		rev = rev * 10 + n % 10;
		n = n / 10;
	}
	printf("reverse num : %d",rev);
}
