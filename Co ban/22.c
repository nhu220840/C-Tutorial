#include <stdio.h>
int main(){
	char kitu;
	scanf("%c", &kitu);
	if(kitu >= '0' && kitu <= '9'){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
