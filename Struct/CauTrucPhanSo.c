#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct phanso{
	int tu;
	int mau;
};

typedef struct phanso phanso;

int gcd(int a, int b){
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int lcm(int a, int b){
	return a/gcd(a, b) * b;
}

phanso rutgon(phanso a){
	phanso res;
	int uc = gcd(abs(a.tu), abs(a.mau));
	res.tu = a.tu / uc;
	res.mau = a.mau / uc;
	return res;
}

phanso tong(phanso a, phanso b){
	phanso res;
	int mc = lcm(a.mau, b.mau);
	res.mau = mc;
	res.tu = a.tu * (mc / a.mau) + b.tu * (mc / b.mau);
	return rutgon(res);
}

phanso hieu(phanso a, phanso b){
	phanso res;
	int mc = lcm(a.mau, b.mau);
	res.mau = mc;
	res.tu = a.tu * (mc / a.mau) - b.tu * (mc / b.mau);
	return rutgon(res);
}

int main(){
	phanso x, y;
	scanf("%d %d\n", &x.tu, &x.mau);
	scanf("%d %d", &y.tu, &y.mau);
	x = rutgon(x);
	y = rutgon(y);
	printf("%d/%d\n%d/%d\n", x.tu, x.mau, y.tu, y.mau);
	phanso t = tong(x, y);
	phanso h = hieu(x, y);
	printf("%d/%d\n%d/%d", t.tu, t.mau, h.tu, h.mau);
}
