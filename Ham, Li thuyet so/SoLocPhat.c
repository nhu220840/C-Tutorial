#include <stdio.h>
int SoThuanNghich(int n){
	int lat = 0, tmp = n;
	while(n){
		lat = lat*10 + n%10;
		n /= 10;
	}
	if(lat == tmp)
		return 1;
	else
		return 0;
}

int locphat(int n){
	int cnt = 0;
	int sum = 0;
	while(n){
		int r = n%10;
		if(r == 6) cnt++;
		sum += r;
		n /= 10;
	}
	if(cnt == 0)
		return 0;
	else
		if(sum % 10 == 8) 
			return 1;
		else 
			return 0;
}

int main(){
	int a, b; scanf("%d %d", &a, &b);
	for(int i = a; i <= b; i++){
		if(SoThuanNghich(i) && locphat(i)) 
			printf("%d ", i);
	}
}
