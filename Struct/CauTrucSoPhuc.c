#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct sophuc{
	int thuc;
	int ao;
};

typedef struct sophuc sophuc;

sophuc tong(sophuc a, sophuc b){
	sophuc res;
	res.thuc = a.thuc + b.thuc;
	res.ao = a.ao + b.ao;
	return res;
}

sophuc hieu(sophuc a, sophuc b){
	sophuc res;
	res.thuc = a.thuc - b.thuc;
	res.ao = a.ao - b.ao;
	return res;
}

sophuc tich(sophuc a, sophuc b){
	sophuc res;
	res.thuc = a.thuc*b.thuc - a.ao*b.ao;
	res.ao = a.thuc*b.ao + a.ao*b.thuc;
	return res;
}

int main(){
	sophuc a, b;
	scanf("%d %d %d %d", &a.thuc, &a.ao, &b.thuc, &b.ao);
	sophuc t = tong(a, b);
	printf("%d %d\n", t.thuc, t.ao);
	sophuc h = hieu(a, b);
	printf("%d %d\n", h.thuc, h.ao);
	sophuc ti = tich(a, b);
	printf("%d %d", ti.thuc, ti.ao);
}
