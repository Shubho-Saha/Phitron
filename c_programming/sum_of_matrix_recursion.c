#include<stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int A[r][c], B[r][c], C[r][c];

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    
}