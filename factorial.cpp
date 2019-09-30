#include<stdio.h>
int main() {
	int n,fact = 1;
	printf("enter the value:");
	scanf("%d",&n);
	while (n != 0) {
		fact = fact * n;
		n = n - 1;
	}
	printf("%d",fact);
}
