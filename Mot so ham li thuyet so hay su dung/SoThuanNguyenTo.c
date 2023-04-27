#include <stdio.h>
#include <math.h>
int KiemtraSoNguyenTo(int n){
	if(n < 2) return 0;
	int i;
	for(i = 2; i <= sqrt(n); i++){
		if(n%i == 0)
			return 0; 
	}
	return 1;
}

int Tongcs(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	if(KiemtraSoNguyenTo(sum)) 
		return 1;
	else
		return 0;
}

int Chusongto(int n){
	while(n){
		int r = n%10;
		if(r != 2 && r != 3 && r != 5 && r != 7) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int a, b; scanf("%d %d", &a, &b);
	int i;
	int cnt = 0;
	for(i = a; i <= b; i++){
		if(Chusongto(i) && Tongcs(i) && KiemtraSoNguyenTo(i))
			cnt++;
	}
	printf("%d", cnt);
	
}
