#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chen(char c[]){
	char res[10005];
	int cnt = 0;
	int idx = 0;
	for(int i = strlen(c) - 1; i >= 0; i--){
		cnt++;
		res[idx] = c[i];
		idx++;
		if(cnt % 3 == 0 && i != 0){
			res[idx] = ',';
			idx++;
		}
	}
	for(int i = idx - 1; i >= 0; i--){
		printf("%c", res[i]);
	}
}

int main(){
	char c[10005];
	scanf("%s", c);
	chen(c);
}
