#include <stdio.h>
#include <math.h>

//Sap xep noi bot: Bubble Sort
//O(N^2)
//Tu tuong: Dua phan tu lon nhat chua duoc sap xep ve cuoi day
//O moi buoc kiem tra 2 phan tu lien ke nhau, phan tu nao lon hon thi hoan vi ra sau

void bubbleSort(int a[], int n){
	//chi can n-1 buoc
	for(int i = 0; i < n-1; i++){
		//duyet tu chi so j = 0 => n-i-2
		for(int j = 0; j < n-i-1; j++){
			//so sanh 2 phan tu lien ke
			if(a[j] > a[j+1]){
				//hoan vi phan tu lon hon ve phia sau
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	bubbleSort(a, n);
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
