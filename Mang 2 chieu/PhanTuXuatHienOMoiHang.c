#include <stdio.h>

int dem[1000];

int main(){
	int n; scanf("%d", &n);
	int a[n + 5][n + 5];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(dem[a[i][j]] == i - 1){
				dem[a[i][j]] = i;
			}
		}
	}
	int check = 0;
	for(int i = 0; i <= 100; i++){
		if(dem[i] == n){
			printf("%d ", i);
			check = 1;
		}
	}
	if(check == 0)
		printf("NOT FOUND");
}
