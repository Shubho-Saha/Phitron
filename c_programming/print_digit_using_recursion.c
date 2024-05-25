#include<stdio.h>
void printDigit(int n) {
    if (n == 0) return;
    int x = n % 10;
    printDigit(n/10);
    printf("%d ", x);

}

int main() {
    int test;
    scanf("%d", &test);

    for(int i=0; i<test; i++) {
        int n;
        scanf("%d", &n);
        printDigit(n);
        if(n == 0) {
            printf("0");
        }
        printf("\n");
    }

    
}