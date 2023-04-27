#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int sum = 0;
	int i;
	for(i=1; i<n; i++){
		if(n%i == 0) sum += i;
	}
	if(sum == n) printf("%d la so hoan hao", i);
	else printf("%d ko la so hoan hao", i);
}
