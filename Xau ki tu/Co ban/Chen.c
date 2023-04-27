#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[10001];
	scanf("%s", c);
	int k; scanf("%d", &k);
	for(int i = 0; i < k; i++){
		printf("%c", c[i]);
	}
	printf("28tech");
	for(int i = k; i < strlen(c); i++){
		printf("%c", c[i]);
	}
}
