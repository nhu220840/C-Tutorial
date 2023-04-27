#include <stdio.h>
#include <math.h>

void merge(int a[], int l, int m, int r){
	int n1 = m - l + 1, n2 = r - m;
	int x[n1], y[n2];
	for(int i = 0; i < n1; i++){
		x[i] = a[l + i];
	}
	for(int i = 0; i < n2; i++){
		y[i] = a[m + 1 + i];
	}
	int idx = l;
	int i = 0, j = 0;
	while(i < n1 && j < n2){
		if(x[i] <= y[j]){
			a[idx++] = x[i++];
		}
		else{
			a[idx++] = y[j++];
		}
	}
	while(i < n1){
		a[idx++] = x[i++];
	}
	while(j < n2){
		a[idx++] = y[j++];
	}
}

void mergeSort(int a[], int l, int r){
	if(l < r){
		int m = (l + r) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	mergeSort(a, 0, n - 1);
	int min_kc = 1e9 + 5;
	int cnt = 0;
	for(int i = 1; i < n; i++){
		if(abs(a[i] - a[i-1]) < min_kc){
			min_kc = abs(a[i] - a[i-1]);
			cnt = 1;
		}
		else if(abs(a[i] - a[i-1]) == min_kc){
			cnt++;
		}
	}
	printf("%d %d", min_kc, cnt);
}
