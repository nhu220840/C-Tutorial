#include <stdio.h>

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int a[100][100];
int n, m;

void loang(int i, int j){
	a[i][j] = 0; //danh dau = 0, la da tim thay o 1
	for(int k = 0; k < 4; k++){
		//Xet 4 xung quanh i, j (chung canh)
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		//Kiem tra xem 4 o do con nam trong ma tran khong?
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1){
			loang(i1, j1); //de quy de loang tiep den nhung o 1 ben canh
		}
	}
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int dem = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == 1){
				dem++; //tim thay mien co so 1
				loang(i, j); //loang den nhung o 1 ben canh va danh dau cho no = 0 
			}
		}
	}
	printf("%d", dem);
}
