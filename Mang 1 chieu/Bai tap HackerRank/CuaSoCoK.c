#include <stdio.h>

//int main(){
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int a[n]; 
//	for(int i = 0; i < n; i++){
//		scanf("%d", &a[i]);
//	}
//	for(int i = 0; i <= n-k; i++){
//		int sum = 0;
//		for(int j = 0; j < k; j++){
//			sum += a[j+i];
//		}
//		printf("%d ", sum);
//	}
//}


int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int sum = 0;
	for(int i = 0; i < k; i++){
		sum += a[i];
	}
	int res = sum;
	printf("%d ", res);
	for(int i = 1; i <= n - k; i++){
		sum = sum - a[i - 1] + a[i + k - 1];
		printf("%d ", sum);
	}
}
