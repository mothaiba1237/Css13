#include <stdio.h>
#define MAX_R 100
#define MAX_C 100

void cm(int m[MAX_R][MAX_C], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) { 
            scanf("%d", &m[i][j]);
        }
    }
}
void pm(int m[MAX_R][MAX_C], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m[MAX_R][MAX_C];
    int r, c;

    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &r);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &c);
    cm(m, r, c);
    pm(m, r, c);

    return 0;
}

