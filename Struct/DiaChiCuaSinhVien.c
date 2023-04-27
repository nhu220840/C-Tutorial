#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct SV{
	char ten[100];
	char ngaysinh[100];
	char diachi[100];
	double gpa;
};

typedef struct SV SV;

SV nhap(){
	SV x;
	gets(x.ten);
	gets(x.ngaysinh);
	gets(x.diachi);
	scanf("%lf", &x.gpa);
	return x;
}

void in(SV x){
	printf("%s %s %s %.2lf\n", x.ten, x.ngaysinh, x.diachi, x.gpa);
}

struct TinhThanh{
	char ten[100];
	int sl;
};

typedef struct TinhThanh TinhThanh;

TinhThanh v[1000];
int m = 0;

int findPos(char diachi[]){
	for(int i = 0; i < m; i++){
		if(strcmp(v[i].ten, diachi) == 0)
			return i;
	}
	return -1;
}

int cmp(const void *a, const void *b){
	TinhThanh *x = (TinhThanh *)a;
	TinhThanh *y = (TinhThanh *)b;
	return strcmp(x->ten, y->ten);
}

int main(){
	int n; scanf("%d", &n);
	SV a[n];
	for(int i = 0; i < n; i++){
		getchar();
		a[i] = nhap();
		int pos = findPos(a[i].diachi);
		if(pos == -1){
			strcpy(v[m].ten, a[i].diachi);
			v[m].sl = 1;
			m++; 
		}
		else
			v[pos].sl++;
	}
	int max_fre = 0;
	for(int i = 0; i < m; i++){
		if(v[i].sl > max_fre) max_fre = v[i].sl;
	}
	qsort(v, m, sizeof(TinhThanh), cmp);
	for(int i = 0; i < m; i++){
		if(v[i].sl == max_fre){
			printf("%s\n", v[i].ten);
		}
	}
}
