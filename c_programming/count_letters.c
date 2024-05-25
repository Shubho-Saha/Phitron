#include<stdio.h>
#include<string.h>
int main() {
    char str[1000];
    char count[26] = {0};

    scanf("%s", str);
    for(int i=0; i<strlen(str); i++) {
        count[str[i] - 'a']++;
    }

    for(int i=0; i<26; i++) {
        if (count[i] != 0) {
            printf("%c : %d\n", i + 'a', count[i] );
        }
    }
}