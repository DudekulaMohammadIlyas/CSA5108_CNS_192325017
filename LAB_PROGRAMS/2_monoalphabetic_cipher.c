#include <stdio.h>
#include <ctype.h>
#include <string.h>

int validateKey(const char *key) {
    if (strlen(key) != 26) return 0;
    int seen[26] = {0};
    for (int i = 0; i < 26; i++) {
        if (!isalpha((unsigned char)key[i])) return 0;
        int idx = toupper((unsigned char)key[i]) - 'A';
        if (seen[idx]) return 0;
        seen[idx] = 1;
    }
    return 1;
}

void encryptMonoalphabetic(char *text, const char *key) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (isupper((unsigned char)text[i])) {
            int idx = text[i] - 'A';
            text[i] = toupper((unsigned char)key[idx]);
        } else if (islower((unsigned char)text[i])) {
            int idx = text[i] - 'a';
            text[i] = tolower((unsigned char)key[idx]);
        }
    }
}

void decryptMonoalphabetic(char *text, const char *key) {
    char mapUpper[26];
    char mapLower[26];
    for (int i = 0; i < 26; i++) {
        int uIdx = toupper((unsigned char)key[i]) - 'A';
        mapUpper[uIdx] = (char)('A' + i);
        int lIdx = tolower((unsigned char)key[i]) - 'a';
        mapLower[lIdx] = (char)('a' + i);
    }
    for (int i = 0; text[i] != '\0'; i++) {
        if (isupper((unsigned char)text[i])) {
            int idx = text[i] - 'A';
            text[i] = mapUpper[idx];
        } else if (islower((unsigned char)text[i])) {
            int idx = text[i] - 'a';
            text[i] = mapLower[idx];
        }
    }
}

int main() {
    char text[500];
    char key[100];

    printf("Enter 26-letter substitution key: ");
    if (scanf("%99s", key) != 1) {
        printf("Invalid key input.\n");
        return 1;
    }

    while (getchar() != '\n');

    if (!validateKey(key)) {
        printf("Key must contain 26 unique alphabetic characters.\n");
        return 1;
    }

    printf("Enter plaintext: ");
    if (fgets(text, sizeof(text), stdin) != NULL) {
        size_t len = strlen(text);
        if (len > 0 && text[len - 1] == '\n') {
            text[len - 1] = '\0';
        }
    }

    encryptMonoalphabetic(text, key);
    printf("Encrypted text: %s\n", text);

    decryptMonoalphabetic(text, key);
    printf("Decrypted text: %s\n", text);

    return 0;
}
