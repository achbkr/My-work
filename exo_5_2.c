#include<stdio.h>
#include<string.h>

void anagram(int n, char word_1[], char word_2[]) {
    int freq_1[26] = {0}; 
    int freq_2[26] = {0}; 
    for (int i = 0; i < n; i++) {
        freq_1[word_1[i] - 'a']++;
        printf("%d\n",freq_1[word_1[i] - 'a']++);
    } 
    for (int i = 0; i < n; i++) {
        freq_2[word_2[i] - 'a']++;
        printf("%d\n",freq_2[word_2[i] - 'a']++);
    }
    int is_anagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq_1[i] != freq_2[i]) {
            is_anagram = 0;
            break;
        }
    }
    if (is_anagram) {
        printf("The two words are anagrams.\n");
    } else {
        printf("The two words are not anagrams.\n");
    }
}

int main() {
    int n;
    printf("Enter the length of the two words: ");
    scanf("%d", &n);

    char first_word[n], sec_word[n];

    printf("Enter the first word: ");
    scanf("%s", first_word);

    printf("Enter the second word: ");
    scanf("%s", sec_word);

    anagram(n, first_word, sec_word);

    return 0;
}
