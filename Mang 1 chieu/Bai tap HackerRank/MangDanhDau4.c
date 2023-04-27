#include <stdio.h>

int dem[1000001];

int main(){
	int n; scanf("%d", &n);
	int a[n];
	int max = -1e9;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		dem[a[i]]++;
		if(a[i] > max) max = a[i];
	}
	int tansuat = 0, res;
	for(int i = 0; i <= max; i++){
		if(dem[a[i]] > tansuat){
			tansuat = dem[a[i]];
			res = i;
		}
	}
	printf("%d %d", res, tansuat);
}
