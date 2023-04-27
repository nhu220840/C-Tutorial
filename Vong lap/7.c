#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i;
	long long sum = 0;
	for(i=2; i<=n; i+=2){
		sum += i;
	}
	printf("%d", sum);
}
