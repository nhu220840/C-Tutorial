#include <stdio.h>

//tim kiem vi tri dau tien cua phan tu X trong mang duoc sx tang dan
//neu khong tim thay thi in ra -1
int firstPos(int a[], int n, int x){
	int res = -1, l = 0, r = n-1;
	while(l <= r){
		int m = (l+r) / 2;
		if(a[m] >= x){
			res = m;
			//cap nhat res = chi so cua phan tu x
			//tiep tuc tim kiem ben trai xem con phan tu x nao xuat hien truoc k?
			r = m-1;
		}
		else{
			l = m+1;
		}
	}
	return res;
}

//tim kiem vi tri dau tien cua phan tu >= X trong mang sx tang dan
int first(int a[], int n, int x){
	int res = -1, l = 0, r = n-1;
	while(l <= r){
		int m = (l+r) / 2;
		if(a[m] >= x){
			res = m;
			//tim kiem ben trai
			l = m - 1;
		}
		else{
			r = m + 1;
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
	printf("%d", firstPos(a, n, x));
}
