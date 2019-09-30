#include<stdio.h>
int main() {
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	if (n & 1 == 0) {
		printf("even number");
	}
	else {
		printf("odd number");
	}
}
