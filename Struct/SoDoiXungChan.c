#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct word{
	char tu[100];
	int stt;
	int ts;
};

typedef struct word word;

word a[1000];
int n = 0;

int chan(char c[]){
	for(int i = 0; i < strlen(c); i++){
		if((c[i] - '0') % 2 != 0)
			return 0;
	}
	return 1;
}

int dx(char c[]){
	int l = 0, r = strlen(c) - 1;
	while(l <= r){
		if(c[l] != c[r])
			return 0;
		l++; r--;
	}
	return 1;
}

int findPos(char c[]){
	for(int i = 0; i < n; i++){
		if(strcmp(c, a[i].tu) == 0){
			return i;
		}
	}
	return -1;
}

int cmp(const void *a, const void *b){
	word *x = (word *)a;
	word *y = (word *)b;
	if(x->ts != y->ts){
		return y->ts - x->ts;
	}
	else{
		return x->stt - y->stt;
	}
}

int main(){
	char tmp[100];
	while(scanf("%s", tmp) != -1){
		if(chan(tmp) && dx(tmp)){
			int pos = findPos(tmp);
			if(pos == -1){
				strcpy(a[n].tu, tmp);
				a[n].ts = 1;
				a[n].stt = findPos(tmp);
				n++;
			}
			else{
				a[pos].ts++;
			}
		}
	}
	qsort(a, n, sizeof(word), cmp);
	for(int i = 0; i < n; i++){
		if(a[i].tu != 0){
			printf("%s %d\n", a[i].tu, a[i].ts);
		}
	}
}
