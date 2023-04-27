#include <stdio.h>

//Dieu kien: day tim kiem phai duoc sap xep tang dan san roi

int binarySearch(int a[], int n, int x){
	int left = 0, right = n-1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] == x)
			return 1;
		else if(a[mid] > x){
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	return 0;
}

int main(){
	int n, x; scanf("%d %d", &n, &x);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("%d", binarySearch(a, n, x));
}
