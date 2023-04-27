#include <stdio.h>
#include <math.h>

int giao[10000001], hop[10000001];

int main(){
	int n, m; scanf("%d %d", &n, &m);
	int max = -1e9;
	for(int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		max = fmax(max, x);
		hop[x] = 1;
		giao[x] = 1;
	}
	for(int i = 0; i < m; i++){
		int x;
		scanf("%d", &x);
		max = fmax(max, x);
		hop[x] = 1;
		if(giao[x] == 1){
			giao[x] = 2;
		}
	}
	for(int i = 0; i <= max; i++){
		if(giao[i] == 2){
			printf("%d ", i);
		}
	}
	printf("\n");
	for(int i = 0; i <= max; i++){
		if(hop[i]){
			printf("%d ", i);
		}
	}
}
