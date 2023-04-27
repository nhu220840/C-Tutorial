#include <stdio.h>
#include <math.h>

int nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

int main(){
	int a[10000];
	int n = 0;
	int tmp;
	while(scanf("%d", &tmp) != -1){
		a[n] = tmp;
		n++;
	}
	for(int i = 0; i < n; i++){
		int check = 1;
		for(int j = 0; j < i; j++){
			if(a[i] == a[j]){
				check = 0;
				break;
			}
		}
		if(check == 1){
			if(nt(a[i])){
				int cnt = 1;
				for(int j = i + 1; j < n; j++){
					if(a[i] == a[j]) cnt++;
				}
				printf("%d %d\n", a[i], cnt);
			}
		}
	}
}
