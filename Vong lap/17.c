#include <stdio.h>
int main(){
	long long n;
	scanf("%lld", &n);
	int chan = 0;
	int le = 0;
	while(n != 0){
		if(n%10 == 0 || n%10 == 2 || n%10 ==4 || n%10 ==6 || n%10 ==8){
			chan++; 
		}
		else{
			le++;
		}
		n/=10;
	}
	if(chan == le){
			printf("YES");
		}
	else{
			printf("NO");
	}
}
