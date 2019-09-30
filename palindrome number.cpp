#include<stdio.h>
int main() {
	int n,rev = 0,k;
	printf("enter the value:");
	scanf("%d",&n);
	k = n;
	while (n != 0) {
		rev = rev * 10 + n % 10;
		n = n / 10;
	}
	if (k == rev) {
	    printf("palindrome number");
	}
	else {
		printf("not a palindrome number");
	}
}
