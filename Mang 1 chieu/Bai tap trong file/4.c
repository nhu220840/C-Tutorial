#include <stdio.h>
int min(int a, int b){
	int min = a;
	if(b<min){
		min = b;
	}
	return min;
}

int max(int a, int b){
	int max = a;
	if(b>max){
		max = b;
	}
	return max;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		if(i==0) printf("%d %d\n", a[1]-a[0], a[n-1]-a[0]);
		else if(i==n-1) printf("%d %d\n", a[n-1]-a[n-2], a[n-1]-a[0]);
		else printf("%d %d\n", min(a[i]-a[i-1], a[i+1]-a[i]), max(a[i]-a[0], a[n-1]-a[i]));
	}
}
