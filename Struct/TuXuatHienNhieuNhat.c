#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct word{
	char nd[100];
	int tansuat;
};

typedef struct word word;

word a[1000];
int n = 0;

int findPos(char c[]){
	for(int i = 0; i < n; i++){
		if(strcmp(c, a[i].nd) == 0)
			return i;
	}
	return -1;
}

int main(){
	char tmp[100];
	while(scanf("%s", tmp) != -1){
		int pos = findPos(tmp);
		if(pos == -1){
			strcpy(a[n].nd, tmp);
			a[n].tansuat = 1;
			n++;
		}
		else{
			a[pos].tansuat++;
		}
	}
	int tsmax = 0; 
	char res[100];
	for(int i = 0; i < n; i++){
		if(a[i].tansuat > tsmax){
			tsmax = a[i].tansuat;
			strcpy(res, a[i].nd);
		}
		else if(a[i].tansuat == tsmax){
			if(strcmp(a[i].nd, res) < 0){
				strcpy(res, a[i].nd);
			}
		}
	}
	printf("%s", res);
}
