#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char S[100001], T[100001];
	gets(S), gets(T);
	char *ptr = strstr(S, T);
	if(ptr == NULL)
		printf("NO");
	else
		printf("YES");
}
