#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
struct SinhVien{
	char ten[100];
	char ngaysinh[100];
	char diachi[100];
	int toan, ly, hoa;
};

typedef struct SinhVien SinhVien;

//co 2 cach de nhap Sinh Vien:
//void nhap(SinhVien *x){
//	gets(x->ten);
//	gets(x->ngaysinh);
//	gets(x->diachi);
//	scanf("%d %d %d", &x->toan, &x->ly, &x->hoa);
//}

SinhVien nhap(){
	SinhVien x;
	gets(x.ten);
	gets(x.ngaysinh);
	gets(x.diachi);
	scanf("%d %d %d", &x.toan, &x.ly, &x.hoa);
	return x;
}

void in(SinhVien x){
	printf("%s\n%s\n%s\n%d %d %d\n", x.ten, x.ngaysinh, x.diachi, x.toan, x.ly, x.hoa);
}

//void thukhoa(int n){
//	int max = 0;
//	for(int i = 0; i < n; i++){
//		max = fmax(max, a[i].toan + a[i].ly + a[i].hoa);
//	}
//	for(int i = 0; i < n; i++){
//		if(a[i].toan + a[i].ly + a[i].hoa == max){
//			printf("%s %s %s %d", a[i].ten, a[i].ngaysinh, a[i].diachi, a[i].toan + a[i].ly + a[i].hoa);
//		}
//	}
//}

int main(){
	int n; scanf("%d", &n);
	SinhVien a[n];
	for(int i = 0; i < n; i++){
		getchar();
//		nhap(&a[i]);
		a[i] = nhap();
	}
	printf("DANH SACH THU KHOA :\n");
	int max = 0;
	for(int i = 0; i < n; i++){
		max = fmax(max, a[i].toan + a[i].ly + a[i].hoa);
	}
	for(int i = 0; i < n; i++){
		if(a[i].toan + a[i].ly + a[i].hoa == max){
			printf("%s %s %s %d\n", a[i].ten, a[i].ngaysinh, a[i].diachi, a[i].toan + a[i].ly + a[i].hoa);
		}
	}
	printf("KET QUA XET TUYEN:\n");
	for(int i = 0; i < n; i++){
		int tong = a[i].toan + a[i].ly + a[i].hoa;
		if(tong >= 24){
			printf("%s %s %s %d DO\n", a[i].ten, a[i].ngaysinh, a[i].diachi, tong);
		}
		else{
			printf("%s %s %s %d TRUOT\n", a[i].ten, a[i].ngaysinh, a[i].diachi, tong);
		}
	}
}
