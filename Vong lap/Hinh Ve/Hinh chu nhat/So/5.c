#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i, j;
	for(j=1; j<=n; i++){
		int init = i;
		int cnt = n-1;
		for(j=1; j<=i; j++){
			printf("%d ", init);
			init += cnt;
			cnt--;
		}
		printf("\n");
	}
}
