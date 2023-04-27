#include <stdio.h>
#include <math.h>

//Sap xep chon: Selection sort
//O(N^2)
//Tu tuong: O moi buoc se dua phan tu nho nhat (lon  nhat) chua duoc sap xep ve dau day
 
void selectionSort(int a[], int n){
	//B1: Chon phan tu nho nhat chua duoc sap xep va hoan vi no voi a[i]
	for(int i = 0; i < n-1; i++){
		//di tim phan tu nho nhat chua duoc sap xep
		//luu y tim chi so cua thang nho nhat de hoan vi
		int min_pos = i; //ban dau coi thang o chi so i la nho nhat
		for(int j = i+1; j < n; j++){
			if(a[j] < a[min_pos]){
				min_pos = j;
			}
		}
		int tmp = a[i];
		a[i] = a[min_pos];
		a[min_pos] = tmp;
	}
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	selectionSort(a, n);
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
