#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n,i=0,j=0,x=1;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
			x = x * 2;
	}
	printf("%d", x);
}