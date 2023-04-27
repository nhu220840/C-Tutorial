#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

struct SinhVien{
	char ten[100];
	char ngaysinh[100];
	char diachi[100];
	double gpa;
	int stt;
};

typedef struct SinhVien SinhVien;

SinhVien nhap(){
	SinhVien x;
	gets(x.ten);
	gets(x.ngaysinh);
	gets(x.diachi);
	scanf("%lf", &x.gpa);
	return x;
}

void in(SinhVien x){
	printf("%s %s %s %.2lf\n", x.ten, x.ngaysinh, x.diachi, x.gpa);
}

//void sapxep(SinhVien a[], int n){
//	for(int i = 0; i < n - 1; i++){
//		int pos = i;
//		for(int j = i + 1; j < n; j++){
//			if(a[j].gpa > a[pos].gpa){
//				pos = j;
//			}
//			SinhVien tmp = a[pos];
//			a[pos] = a[i];
//			a[i] = tmp;
//		}
//	}
//}

int cmp(const void *a, const void *b){
	SinhVien *x = (SinhVien *)a;
	SinhVien *y = (SinhVien *)b;
	if(x->gpa != y->gpa){
		if(x->gpa > y->gpa)
			return -1;
		else
			return 1;
	}
	else{
		return x->stt - y->stt;
	}
}

int main(){
	int n; scanf("%d", &n);
	SinhVien a[n];
	for(int i = 0; i < n; i++){
		getchar();
		a[i] = nhap();
		a[i].stt = i;
	}
	qsort(a, n, sizeof(SinhVien), cmp);
	for(int i = 0; i < n; i++){
		in(a[i]);
	}
}
