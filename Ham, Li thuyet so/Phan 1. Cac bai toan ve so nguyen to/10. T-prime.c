#include <stdio.h>
int dem(int n){
	int cnt = 0;
	int i;
	for(i=1; i<=n; i++){
		if(n%i == 0) cnt++;
	}
	if(cnt == 3) return 1;
	return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int i;
		for(i=1; i<=n; i++){
			if(dem(i) == 1) printf("%d ", i);
		}
		printf("\n");
	}
}
