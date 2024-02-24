#include <stdio.h>
#include <math.h>

//Sap xep chen: Insertion Sort
//O(N^2)
//Tu tuong: O moi buoc chen phan tu dang xet vao cac phan tu da duoc sap xep truoc do
//          sao cho van giu duoc tinh tang giam cua day (cung tang hoac cung giam)

void insertionSort(int a[], int n){
	//bat dau xet tu phan tu thu 2 trong day 
	//vi phan tu thu nhat khong the chen vao truoc no duoc nua
	for(int i = 1; i < n; i++){
		int pos = i-1, value = a[i];
		//pos: vi tri li tuong co the chen, value: gia tri can chen
		while(pos >= 0 && value < a[pos]){ 
			a[pos + 1] = a[pos]; //dich phan tu sang ben phai
			pos--; 
		}
		a[pos + 1] = value; //chen value vao vi tri dang sau phan tu duoc so sanh 
	}
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	insertionSort(a, n);
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
