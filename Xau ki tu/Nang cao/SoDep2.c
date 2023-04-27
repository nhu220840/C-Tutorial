#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check(char c[]){
	int l = 0, r = strlen(c) - 1;
	int check = 0;
	while(l <= r){
		if(c[l] != c[r])
			return 0;
		if(c[l] == '6')
			check = 1;
		l++; r--;
	}
	return check;
}

int main(){
	char c[1005];
	scanf("%s", c);
	if(check(c))
		printf("YES");
	else
		printf("NO");
}
