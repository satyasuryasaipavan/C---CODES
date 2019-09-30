#include<stdio.h>
int main() {
	int n,count = 0,i;
	printf("enter the value :");
	scanf("%d",&n);
	for (i = 1;i < n;i++) {
		if (n % i == 0) {
			count = count + 1;
		}
	}
	if ( count > 1) {
		printf("not prime");
	}
	else {
		printf("prime number");
	}
}
