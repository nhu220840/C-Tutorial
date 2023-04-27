#include <stdio.h>
#include <string.h>
#include <ctype.h>

int cnt[256];

int main(){
	char c[10001];
	scanf("%s", c);
	for(int i = 0; i < strlen(c); i++){
		cnt[c[i]]++;
	}
	for(int i = 0; i < 256; i++){
		if(cnt[i] != 0){
			printf("%c %d\n", i, cnt[i]);
		}
	}
	printf("\n");
	for(int i = 0; i < strlen(c); i++){
		if(cnt[c[i]] != 0){
			printf("%c %d\n", c[i], cnt[c[i]]);
			cnt[c[i]] = 0;
		}
	}
}
