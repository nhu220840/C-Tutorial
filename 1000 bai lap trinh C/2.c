#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int sum = 0;
	int i;
	for(i=1; i<=n; i++){
		sum += i*i;
	}
	printf("%d", sum);
}
