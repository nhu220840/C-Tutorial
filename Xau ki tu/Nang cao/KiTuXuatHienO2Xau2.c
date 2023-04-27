#include <stdio.h>
#include <string.h>
#include <ctype.h>

int s1[256], s2[256];

int main(){
	char c[100001], d[100001];
	scanf("%s %s", c, d);
	for(int i = 0; i < strlen(c); i++){
		s1[c[i]] = 1;
	}
	for(int i = 0; i < strlen(d); i++){
		s2[d[i]] = 1;
	}
	for(int i = 0; i < 256; i++){
		if(s1[i] != 0 && s2[i] == 0){
			printf("%c", i);
		}
	}
	printf("\n");
	for(int i = 0; i < 256; i++){
		if(s1[i] == 0 && s2[i] != 0){
			printf("%c", i);
		}
	}
}
