#include <stdio.h>

int main(){
	int n, m; scanf("%d %d", &n, &m);
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	int i = 0, j = 0;
	int c[n+m];
	int idx = 0;
	while(i < n && j < m){
		if(a[i] < b[j]){
			c[idx++] = a[i++];
		}
		else{
			c[idx++] = b[j++];
		}
	}
	while(i < n){
		c[idx++] = a[i++];
	}
	while(j < m){
		c[idx++] = b[j++];
	}
	for(int i = 0; i < m+n; i++){
		printf("%d ", c[i]);
	}
}
