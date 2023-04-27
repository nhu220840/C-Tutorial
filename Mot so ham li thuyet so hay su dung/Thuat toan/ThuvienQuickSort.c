#include <stdio.h>
#include <stdlib.h>

//void qsort(array, so_luong_phan_tu, kich_thuoc_1_phan_tu, int (*compa)(const void *, const void *)

//Sap xep tang dan:
//ham compa luon tra ve 2 gtri 1 va -1 (gtri am bat ki)
//-1: Neu a va b da dung thu tu mong muon
//1: Neu a va b ko dung thu tu mong muon

int cmp(const void *a, const void *b){
	//Ep 2 con tro kieu void sang 2 con tro int
	int *x = (int *)a;
	int *y = (int *)b;
//	if(*x < *y)
//		return -1;
//	else
//		return 1;
	return *x - *y;
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
