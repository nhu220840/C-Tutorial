#include <stdio.h>
#include <string.h>
#include <ctype.h>

int giao[256], hop[256];

int main(){
	char c[100001], d[100001];
	scanf("%s", c);
	scanf("%s", d);
	for(int i = 0; i < strlen(c); i++){
		hop[c[i]] = 1;
		giao[c[i]] = 1;
	}
	for(int i = 0; i < strlen(d); i++){
		hop[d[i]] = 1;
		if(giao[d[i]] == 1){
			giao[d[i]] = 2;
		}
	}
	for(int i = 0; i < 256; i++){
		if(giao[i] == 2)
			printf("%c", i);
	}
	printf("\n");
	for(int i = 0; i < 256; i++){
		if(hop[i] != 0)
			printf("%c", i);
	}
}
