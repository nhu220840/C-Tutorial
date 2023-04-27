#include <stdio.h>

#define ll long long

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	ll F[n];
	for(int i = 0; i < n; i++){
		if(i == 0) F[0] = a[0];
		else{
			F[i] = F[i-1] + a[i];
		}
	}
	int q; scanf("%d", &q);
	while(q--){
		int l, r;
		scanf("%d %d", &l, &r);
		l--; r--;
		if(l == 0){
			printf("%lld\n", F[r]);
		}
		else{
			printf("%lld\n", F[r] - F[l - 1]);
		}
	}
}
