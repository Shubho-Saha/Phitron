#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    
    if (row != col) {
        printf("NO");
        return 0;
    }
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            scanf("%d", &arr[i][j]);
        }
    } 

    int jadu = 1;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if (i == j || i+j == row-1) {
                if (arr[i][j] != 1) {
                    jadu = 0;
                }
            } else {
                if (arr[i][j] != 0) {
                    jadu = 0;
                }
            }
        }
    }
    if (jadu == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
