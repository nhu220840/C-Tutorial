#include <stdio.h>

//Sap xep dem phan phoi: Counting Sort
//O(N+K)
//Tu tuong: Dem xem 1 gtri xuat hien bao nhieu lan, sau do in tu be den lon
//Dieu kien: Khai bao duoc 1 mang danh dau co co la K+1 phan tu
//           K la phan tu lon nhat trong mang
//           Cac phan tu trong mang ko duoc la so am

int dem[10000001] = {0};

void countingSort(int a[], int n){
	int K = -1e9;
	for(int i = 0; i < n; i++){
		dem[a[i]]++;
		if(a[i] > K) K = a[i];
	}
	for(int i = 0; i <= K; i++){
		for(int j = 0; j < dem[i]; j++){
			printf("%d ", i);
		}
	}
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	countingSort(a, n);
}
