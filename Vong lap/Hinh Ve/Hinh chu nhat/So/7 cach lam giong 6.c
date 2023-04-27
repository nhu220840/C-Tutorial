#include <stdio.h>
int min(int a, int b){
	if(a>b) return b;
	return a;
}

int main(){
	int n; scanf("%d", &n);
	int i, j;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			int min_dis = min(i-1, j-1);
			printf("%d ", n-min_dis);
		}
		printf("\n");
	}
}
