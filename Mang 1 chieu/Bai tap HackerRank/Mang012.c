#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int cnt[3] = {0};
	for(int i = 0; i < n; i++){
		int x; scanf("%d", &x);
		cnt[x]++;
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < cnt[i]; j++){
			printf("%d ", i);
		}
	}
}
