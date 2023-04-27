#include <stdio.h>
int main(){
	char kitu;
	scanf("%c", &kitu);
	if(kitu >= 'a' && kitu <= 'z'){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
