#include <stdio.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int min = 1e9, max = -1e9, min_pos, max_pos;
	for(int i = 0; i < n; i++){
		if(a[i] <= min){
			min = a[i];
			min_pos = i;
		}
		if(a[i] > max){
			max = a[i];
			max_pos = i;
		}
	}
	printf("%d %d", min_pos, max_pos);
}
