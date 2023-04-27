#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[100001];
	scanf("%s", c);
	long long tmp = 0;
	long long sum = 0;
	for(int i = 0; i <= strlen(c); i++){
		if(isdigit(c[i])){
			tmp = tmp * 10 + (c[i] - '0');
		}
		else{
			sum += tmp;
			tmp = 0;
		}
	}
	printf("%lld", sum);
}
