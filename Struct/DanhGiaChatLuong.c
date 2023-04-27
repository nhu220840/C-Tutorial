#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct cmt{
	char nd[100];
	int ts;
};

typedef struct cmt cmt;

cmt a[1000];
int n = 0;

int findPos(char c[]){
	for(int i = 0; i < n; i++){
		if(strcmp(c, a[i].nd) == 0)
			return i;
	}
	return -1;
}

int cmp(const void *a, const void *b){
	cmt *x = (cmt *)a;
	cmt *y = (cmt *)b;
	if(x->ts != y->ts){
		return y->ts - x->ts;
	}
	else{
		return strcmp(x->nd, y->nd);
	}
}

int main(){
	char tmp[100];
	while(scanf("%s", tmp) != -1){
		if(strcmp(tmp, "good") == 0 || strcmp(tmp, "bad") == 0 || strcmp(tmp, "wonderful") == 0 || strcmp(tmp, "terrible") == 0){
			int pos = findPos(tmp);
			if(pos == -1){
				strcpy(a[n].nd, tmp);
				a[n].ts = 1;
				n++;
			}
			else{
				a[pos].ts++;
			}
		}
	}
	qsort(a, n, sizeof(cmt), cmp);
	for(int i = 0; i < n; i++){
		if(a[i].ts != 0)
			printf("%s %d\n", a[i].nd, a[i].ts);
	}
}
