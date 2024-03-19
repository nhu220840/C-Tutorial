#include <stdio.h>

//Ham phan hoach Lomuto: tra ve chi so cua khoa (pivot)

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int lomutoPartition(int a[], int l, int r){
	int pos = l - 1, pivot = a[r];
	for(int i = l; i < r; i++){
		//neu a[j] > pivot: bo qua
		if(a[i] <= pivot){
			//dua a[j] len dau 
			pos++;
			swap(&a[pos], &a[i]);
		}
	}
	pos++;
	swap(&a[pos], &a[r]);
	return pos;
}

//Hoare: cung luc tim 1 cap nghich the va doi cho chung cho nhau

int hoarePartition(int a[], int l, int r){
	int pivot = a[l];
	int i = l - 1, j = r + 1;
	while(true){
		do{
			i++;
		}while(a[i] < pivot); //tim phan tu ben trai >= pivot

		do{
			j--;
		}while(a[j] > pivot); //tim phan tu ben phai <= pivot
		
		if(i < j){
			swap(&a[i], &a[j]); //doi cho 2 phan tu cho nhau
		}
		else return j; //tra ve vi tri phan chia
	}
}

void quickSort(int a[], int l, int r){
	if(l < r){
		int pos = lomutoPartition(a, l, r);
		quickSort(a, l, pos - 1); //xet de quy ve ben trai
		quickSort(a, pos + 1, r); //xet de quy ve ban phai
	}
}

void quickSort2(int a[], int l, int r){
	if(l >= r) return;
	int pos = hoarePartition(a, l, r);
	quickSort2(a, l, pos);
	quickSort2(a, pos + 1, r);
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	quickSort2(a, 0, n - 1);
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
