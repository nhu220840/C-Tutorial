#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[1005];
	scanf("%s", c);
	char d[] = "python";
	int idx = 0;
	for(int i = 0; i < strlen(c); i++){
		if(c[i] == d[idx]){
			idx++;
		}
		if(idx == 6){
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}
