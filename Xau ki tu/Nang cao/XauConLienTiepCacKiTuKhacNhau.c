#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[100005];
	scanf("%s", c);
	c[strlen(c)] = c[strlen(c) - 1];
	c[strlen(c) + 1] = '\0';
	int res = 1, cnt = 1;
	char kq[100001];
	kq[0] = c[0];
	kq[1] = '\0';
	char tmp[100001];
	int idx = 0;
	tmp[0] = c[0];
	idx++;
	for(int i = 1; i <= strlen(c); i++){
		if(c[i] != c[i - 1]){
			tmp[idx] = c[i];
			idx++;
			cnt++;
		}
		else{
			tmp[idx] = '\0';
			if(cnt > res){
				res = cnt;
				strcpy(kq, tmp);
			}
			else if(cnt == res){
				//xau tmp co thu tu tu dien lon hon xau kq
				if(strcmp(kq, tmp) < 0){ 
					strcpy(kq, tmp);
				}
			}
			cnt = 1;
			idx = 0;
			tmp[idx] = c[i]; idx++;
			tmp[idx] = '\0';
		}
	}
	printf("%s", kq);
}
