#include <stdio.h>

int main(){
	int n, x, k; scanf("%d %d %d ", &n, &x, &k);
	int a[n+1]; //khai bao thua ra de con chen phan tu
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	k--; //dua thu tu ve chi so
	//duyet tu phan tu thu k den phan tu cuoi cung
	//luu y phai duyet nguoc tu cuoi ve
	for(int i = n; i > k; i--){
		a[i] = a[i-1]; // dich moi phan tu sang ben phai 1 chi so
	}
	a[k] = x; //gan so can chen vao cho trong sau khi dich chi so
	n++; //sau khi chen so luong phan tu trong mang tang len 1
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
