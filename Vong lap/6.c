#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i;
	long long sum = 0;
	for(i=1; i<=n; i++){
		sum += pow(-1,i)*i;
	}
	printf("%d", sum);
}
