#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void thuong(char c[]){
    for(int i = 0; i < strlen(c); i++){
        c[i] = tolower(c[i]);
    }
}

int cmp(const void *a, const void *b){
    char *x = (char *)a;
    char *y = (char *)b;
    return strcmp(x, y);
}

int main(){
    char c[10001];
    gets(c);
    char a[10001][100];
    int n = 0;
    char* word = strtok(c, " ");
    while(word != NULL){
        strcpy(a[n], word);
        n++;
        word = strtok(NULL, " ");
    }
    for(int i = 0; i < n; i++){
        thuong(a[i]);
    }
    qsort(a, n, sizeof(a[0]), cmp);
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(strcmp(a[i], a[i - 1])){
            cnt++;
        }
    }
    printf("%d", cnt);
}
