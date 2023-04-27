#include <stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	long long n = a;
	long long Sn = 2*(n*(n+1)/2);
	printf("%d", Sn);
}
