#include <stdio.h>

#define ll long long 

void merge(ll a[], int l, int m, int r){
	int n1 = m - l + 1, n2 = r - m;
	ll x[n1], y[n2];
	for(int i = 0; i < n1; i++){
		x[i] = a[l + i];
	}
	for(int i = 0; i < n2; i++){
		y[i] = a[m + 1 + i];
	}
	int idx = l;
	int i = 0, j = 0;
	while(i < n1 && j < n2){
		if(x[i] <= y[j]){
			a[idx++] = x[i++];
		}
		else{
			a[idx++] = y[j++];
		}
	}
	while(i < n1){
		a[idx++] = x[i++];
	}
	while(j < n2){
		a[idx++] = y[j++];
	}
}

void mergeSort(ll a[], int l, int r){
	if(l < r){
		int m = (l + r) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

//Tu tuong: luu so trong mang duoi dang binh phuong sau do tim a = b+c

int main(){
	ll n; scanf("%lld", &n);
	ll a[n];
	for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
		a[i] *= a[i]; //luu so trong mang duoi dang binh phuong
	}
	mergeSort(a, 0, n - 1);
	for(int i = n - 1; i >= 2; i--){
		int l = 0, r = i - 1;
		while(l < r){
			if(a[l] + a[r] < a[i]){
				l++;
			}
			else if(a[l] + a[r] > a[i]){
				r--;
			}
			else{
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
	return 0;
}
