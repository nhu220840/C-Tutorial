#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


struct web{
	char ngay[100];
	char gio[100];
	char link[100];
	int ts;
};

typedef struct web web;

web a[1000];
int n = 0;

int findPos(char c[]){
	for(int i = 0; i < n; i++){
		if(strcmp(c, a[i].link) == 0){
			return i;
		}
	}
	return -1;
}

int cmp(const void *a, const void *b){
	web *x = (web *)a;
	web *y = (web *)b;
	if(x->ts != y->ts){
		return y->ts - x->ts;
	}
	else{
		return strcmp(x->link, y->link);
	}
}

int main(){
	char ngay[100], gio[100], link[100];
	while(scanf("%s %s %s", ngay, gio, link) != -1){
		int pos = findPos(link);
		if(pos == -1){
			strcpy(a[n].link, link);
			a[n].ts = 1;
			n++;
		}
		else{
			a[pos].ts++;
		}
	}
	qsort(a, n, sizeof(web), cmp);
	for(int i = 0; i < n; i++){
		if(a[i].ts != 0)
			printf("%s %d\n", a[i].link, a[i].ts);
	}
}
