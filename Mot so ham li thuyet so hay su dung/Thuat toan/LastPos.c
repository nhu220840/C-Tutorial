#include <stdio.h>

//tim kiem vi tri cuoi cung cua phan tu X trong mang duoc sx tang dan
//neu khong tim thay thi in ra -1
int lastPos(int a[], int n, int x){
	int res = -1, l = 0, r = n-1;
	while(l <= r){
		int m = (l+r) / 2;
		if(a[m] <= x){
			res = m;
			//cap nhat res = chi so cua phan tu X;
			//tiep tuc tim ben phai xem con phan tu X nao xuat hien sau ko?
			l = m + 1;
		} 
		else{
			r = m - 1;
		}
	}
	return res;
}

//tim kiem vi tri cuoi cung cua phan tu <= X trong mang duoc sx tang dan
int last(int a[], int n, int x){
	int res = -1, l = 0, r = n-1;
	while(l <= r){
		int m = (l+r) / 2;
		if(a[m] <= x){
			res = m;
			//tim them ben phai xem con ko?
			l = m + 1;
		}
		else{
			r = m - 1;
		}
	}
	return res;
}

int main(){
	int n, x; scanf("%d %d", &n, &x);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("%d %d", lastPos(a, n, x), last(a, n, x));
}

