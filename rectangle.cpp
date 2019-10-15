#include<stdio.h>
int main() {
	int i,j,n,s;
	printf("enter the size :");
	scanf("%d",&n);
	s = 2 * n;
	for (i = 0;i < n;i++) {
		for (j = 0;j < s;j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == s - 1) {
				printf(" * ");
			}
			else {
				printf("   ");
			}			
		}
		printf("\n");
	}
	
}
