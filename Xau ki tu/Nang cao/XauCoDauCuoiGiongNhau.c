#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cnt[256] = {0};

int main(){
	char c[100001];
	scanf("%s", c);
	for(int i = 0; i < strlen(c); i++){
		cnt[c[i]]++;
	}
	long long ans = strlen(c);
	for(int i = 0; i < 256; i++){
		if(cnt[i] != 0)
			ans += 1ll * (cnt[i]) * (cnt[i] - 1) / 2;
	}
	printf("%lld", ans);
}
