#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int i, j;
	int cnt = 1;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			printf("%d ", cnt);
			cnt++;
		}
		printf("\n");
	}
}
