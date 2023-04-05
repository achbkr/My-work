#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindrome(int n, char word[][n]) {
    for (int i = 0; i < n/2; i++) {
        if (word[0][i] != word[0][n-1-i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the size of the word: ");
    scanf("%d", &n);

    char word[1][n+1];
    printf("Enter the word: ");
    scanf("%s", word[0]);

    if (palindrome(n, word)) {
        printf("The word is a palindrome\n");
    } else {
        printf("The word is not a palindrome\n");
    }

    return 0;
}