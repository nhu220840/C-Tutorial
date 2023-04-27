#include <stdio.h>

#define ll long long

int main(){
	int n, m; 
	scanf("%d %d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		ll tonghang = 0;
		for(int j = 0; j < m; j++){
			tonghang += a[i][j];
		}
		printf("%lld ", tonghang);
	}
	printf("\n");
	for(int i = 0; i < m; i++){
		ll tongcot = 0;
		for(int j = 0; j < n; j++){
			tongcot += a[j][i];
		}
		printf("%lld ", tongcot);
	}
}
