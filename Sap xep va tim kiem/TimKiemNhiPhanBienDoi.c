#include <stdio.h>

int first_pos(int a[], int n, int x){
	int res = -1, l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			res = m;
			r = m - 1;
		}
		else if(a[m] > x){
			r = m - 1;
		}
		else{
			l = m + 1;
		}
	}
	return res;
}

int last_pos(int a[], int n, int x){
	int res = -1, l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			res = m;
			l = m + 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else{
			r = m - 1;
		}
	}
	return res;
}

int lonhonbangx(int a[], int n, int x){
	int res = -1, l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] >= x){
			res = m;
			r = m - 1;
		}
		else{
			l = m + 1;
		}
	}
	return res;
}

int lonhonx(int a[], int n, int x){
	int res = -1, l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] > x){
			res = m;
			r = m - 1;
		}
		else{
			l = m + 1;
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
	int p1 = first_pos(a, n, x);
	int p2 = last_pos(a, n, x);
	int p3 = lonhonbangx(a, n, x);
	int p4 = lonhonx(a, n, x);
	printf("%d\n%d\n%d\n%d\n", p1, p2, p3, p4);
	if(p1 != -1)
		printf("%d\n", p2 - p1 + 1);
	else
		printf("0");
}
