#include <stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n + 1];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	//them 1 phan tu giong phan tu cuoi cung vao cuoi day
	//de vong for co the roi vao TH a[i] == a[i-1]
	a[n] = a[n - 1];
	int cnt = 1, ans = 0, sum = a[0], pos = 0, ans_sum = a[0];
	for(int i = 1; i <= n; i++){
		if(a[i] != a[i - 1]){
			cnt++;
			sum += a[i];
		}
		else{
			if(cnt > ans){
				ans = cnt;
				pos = i - cnt;
				ans_sum = sum;
			}
			else if(cnt == ans){
				if(sum > ans_sum){
					pos = i - cnt;
					ans_sum = sum;
				}
			}
			cnt = 1;
			sum = a[i];
		}
	}
	printf("%d\n", ans);
	for(int i = 0; i < ans; i++){
		printf("%d ", a[pos + i]);
	}
}
