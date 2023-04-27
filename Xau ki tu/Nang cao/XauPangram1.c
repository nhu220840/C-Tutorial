#include <stdio.h>
#include <string.h>
#include <ctype.h>

int cnt[256];

int main(){
	char c[100001];
	scanf("%s", c);
	for(int i = 0; i < strlen(c); i++){
		c[i] = tolower(c[i]);
	}
	for(int i = 0; i < strlen(c); i++){
		cnt[c[i]] = 1;
	}
	for(int i = 97; i <= 122; i++){
		if(cnt[i] == 0){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
