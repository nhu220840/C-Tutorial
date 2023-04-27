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

int getMonth(char ngaysinh[]){
	char tmp[100];
	strcpy(tmp, ngaysinh);
	char *ns = strtok(tmp, "/");
	ns = strtok(NULL, "/");
	if(atoi(ns) == 4)
		return 1;
	else
		return 0;
}

int main(){
	int n; scanf("%d", &n);
	SV a[n];
	for(int i = 0; i < n; i++){
		getchar();
		a[i] = nhap();
	}
	for(int i = 0; i < n; i++){
		if(getMonth(a[i].ngaysinh) == 1){
			in(a[i]);
		}
	}
}
