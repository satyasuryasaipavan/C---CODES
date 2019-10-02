#include<stdio.h>
int main() {
	int n,j = 0,i,a[1000],k,r,count;
	printf("enter the range :");
	scanf("%d",&r);
	for (n = 2;n <= r;n++) {
        count = 0;
	    for (i = 1;i <= n;i++) {
		    k = n % i;
	        if (k == 0) {
                count = count + 1;
            }
        }
	    if (count <= 2) {  
	       a[j] = n;
	       j++;
		}
	}
	for (i = 0;i < j;i++) {
		if ((a[i + 1] - a[i]) == 2) {
			printf("%d %d\n",a[i],a[i + 1]);
		}		
	}
}

