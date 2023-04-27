#include <stdio.h>

//Ham phan hoach Lomuto: tra ve chi so cua khoa (pivot)

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int a[], int l, int r){
	int i = l - 1, pivot = a[r];
	for(int j = l; j < r; j++){
		//neu a[j] > pivot: bo qua
		if(a[j] <= pivot){
			//dua a[j] len dau 
			i++;
			swap(&a[i], &a[j]);
		}
	}
	i++;
	swap(&a[i], &a[r]);
	return i;
}

void quickSort(int a[], int l, int r){
	if(l < r){
		int pos = partition(a, l, r);
		quickSort(a, l, pos - 1); //xet de quy ve ben trai
		quickSort(a, pos + 1, r); //xet de quy ve ban phai
	}
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	quickSort(a, 0, n - 1);
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
