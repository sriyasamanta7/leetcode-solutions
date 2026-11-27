
#include <stdio.h>

int main() {
    char s[] = "anagram";
    char t[] = "nagaram";
    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
        freq[s[i] - 'a']++;

    for (int i = 0; t[i] != '\0'; i++)
        freq[t[i] - 'a']--;

    int valid = 1;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            valid = 0;
            break;
        }
    }

    printf("%s\n", valid ? "Valid Anagram" : "Not an Anagram");
    return 0;
}
