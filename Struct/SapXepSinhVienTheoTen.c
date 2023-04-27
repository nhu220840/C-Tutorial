#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct SV{
	char ten[100];
	char ngaysinh[100];
	char diachi[100];
	double gpa;
	int stt;
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

int cmp(const void *a, const void *b){
	SV *x = (SV *)a;
	SV *y = (SV *)b;
	if(strcmp(x->ten, y->ten) == 0){
		return x->stt - y->stt;
	}
	else{
		if(strcmp(x->ten, y->ten) < 0)
			return -1;
		else
			return 1;
	}
}

int main(){
	int n; scanf("%d", &n);
	SV a[n];
	for(int i = 0; i < n; i++){
		getchar();
		a[i] = nhap();
		a[i].stt = i;
	}
	qsort(a, n, sizeof(SV), cmp);
	for(int i = 0; i < n; i++){
		in(a[i]); 
	}
}
