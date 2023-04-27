#include <stdio.h>
int dem[1000001];

int main(){
	int n; scanf("%d", &n);
	int a[n];
	int max = -1e9;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		dem[a[i]] = 1;
		if(a[i] > max) max = a[i];
	}
	int cnt = 0;
	for(int i = 0; i <= max; i++){
		if(dem[i] != 0) cnt++;
	}
	printf("%d", cnt);
}
