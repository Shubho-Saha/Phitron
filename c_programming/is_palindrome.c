#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char s[]) {
    int end = strlen(s) -1;
    int start = 0;

    while(start <= end) {
        if (s[start] != s[end]) {
            return 0;
        }
        start++;
        end--;
    }

    return 1;

}

int main() {
    char str[1001];
    scanf("%s", str);
    int flag = is_palindrome(str);
    if (flag == 0) {
        printf("Not Palindrome");
    } else {
        printf("Palindrome");
    }
    return 0;
}
