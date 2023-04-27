#include <stdio.h>

int dem[1000001];

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		dem[a[i]]++;
	}
	int tansuat = 0, res;
	for(int i = 0; i < n; i++){
		if(dem[a[i]] > tansuat){
			tansuat = dem[a[i]];
			res = a[i];
		}
	}
	printf("%d %d", res, tansuat);
}
