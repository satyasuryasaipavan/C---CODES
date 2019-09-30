#include<stdio.h>
int main() {
	int n,i;
	printf("enter the value:");
	scanf("%d",&n);
	for (i = 1;i <= n;i++) {
		if (i * i == n) {
			printf("square root is : %d",i);
			break;
		}
	}
}
		
