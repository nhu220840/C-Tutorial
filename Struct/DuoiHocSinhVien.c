#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

//void xoa(SV a[], int *n, char name[]){
//	for(int i = 0; i < *n; i++){
//		if(strcmp(a[i].ten, name) == 0){
//			for(int j = i; j < *n - 1; j++){
//				a[j] = a[j + 1];
//			}
//			(*n)--;
//		}
//	}
//}

int main(){
	int n; scanf("%d", &n);
	SV a[n];
	for(int i = 0; i < n; i++){
		getchar();
		a[i] = nhap();
	}
	for(int i = 0; i < n; i++){
		if(a[i].gpa >= 1.0){
			in(a[i]);
		}
	}
}
