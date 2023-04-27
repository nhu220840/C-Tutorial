#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cnt[256];

int main(){
	char c[100001];
	scanf("%s", c);
	for(int i = 0; i < strlen(c); i++){
		cnt[c[i]]++;
	}
	int max = -1e9, min = 1e9;
	char cmax, cmin;
	for(int i = 0; i < 256; i++){
		if(cnt[i] >= max){
			max = cnt[i];
			cmax = (char)i;
		}
		if(cnt[i] != 0 && cnt[i] <= min){
			min = cnt[i];
			cmin = (char)i;
		}
	}
	printf("%c %d\n", cmax, max);
	printf("%c %d", cmin, min);
}
