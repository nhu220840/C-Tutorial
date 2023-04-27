#include <stdio.h>
#include <math.h>
int prime[100001];

void sang(){
	int i;
	for(i=0; i<=100000; i++){
		prime[i] = i;
	}
	for(i=2; i<=sqrt(100000); i++){
		if(prime[i]){
			int j;
			for(j=i*i; j<=100000; j+=i){
				if(prime[j] == j) prime[j] = i;
			}
		}
	}
}

void pt(int n){
	while(n != 1){
		int cnt = 0;
		int temp = prime[n]; //thua so ngto nho nhat cua n hien tai
		while(n%temp == 0){
			cnt++;
			n/=temp;
		}
		printf("%d(%d) ", temp, cnt);
	}
	printf("\n");
}

int main(){
	int t; scanf("%d", &t);
	sang();
	int i;
	for(i=1; i<=t; i++){
		int n; scanf("%d", &n);
		printf("#TC%d: ", i);
		pt(n);
	}
}
