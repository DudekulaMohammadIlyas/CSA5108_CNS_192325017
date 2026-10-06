#include <stdio.h>
#include <string.h>
#include <ctype.h>

void generateKeyTable(const char *key, char keyTable[5][5]) {
    int used[26] = {0};
    used['J' - 'A'] = 1;
    int r = 0, c = 0;

    for (int i = 0; key[i] != '\0'; i++) {
        if (isalpha((unsigned char)key[i])) {
            char ch = toupper((unsigned char)key[i]);
            if (ch == 'J') ch = 'I';
            if (!used[ch - 'A']) {
                used[ch - 'A'] = 1;
                keyTable[r][c] = ch;
                c++;
                if (c == 5) {
                    c = 0;
                    r++;
                }
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        if (!used[i]) {
            keyTable[r][c] = (char)('A' + i);
            c++;
            if (c == 5) {
                c = 0;
                r++;
            }
        }
    }
}

void findPosition(char keyTable[5][5], char ch, int *row, int *col) {
    if (ch == 'J') ch = 'I';
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            if (keyTable[r][c] == ch) {
                *row = r;
                *col = c;
                return;
            }
        }
    }
}

void prepareText(const char *input, char *output) {
    char temp[1000];
    int tempLen = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha((unsigned char)input[i])) {
            char ch = toupper((unsigned char)input[i]);
            if (ch == 'J') ch = 'I';
            temp[tempLen++] = ch;
        }
    }
    temp[tempLen] = '\0';

    int outLen = 0;
    for (int i = 0; i < tempLen; i++) {
        output[outLen++] = temp[i];
        if (i + 1 < tempLen) {
            if (temp[i] == temp[i + 1]) {
                output[outLen++] = 'X';
            } else {
                output[outLen++] = temp[++i];
            }
        } else {
            output[outLen++] = 'X';
        }
    }
    output[outLen] = '\0';
}

void encryptPlayfair(char keyTable[5][5], char *text) {
    int len = strlen(text);
    for (int i = 0; i < len; i += 2) {
        int r1, c1, r2, c2;
        findPosition(keyTable, text[i], &r1, &c1);
        findPosition(keyTable, text[i + 1], &r2, &c2);

        if (r1 == r2) {
            text[i] = keyTable[r1][(c1 + 1) % 5];
            text[i + 1] = keyTable[r2][(c2 + 1) % 5];
        } else if (c1 == c2) {
            text[i] = keyTable[(r1 + 1) % 5][c1];
            text[i + 1] = keyTable[(r2 + 1) % 5][c2];
        } else {
            text[i] = keyTable[r1][c2];
            text[i + 1] = keyTable[r2][c1];
        }
    }
}

void decryptPlayfair(char keyTable[5][5], char *text) {
    int len = strlen(text);
    for (int i = 0; i < len; i += 2) {
        int r1, c1, r2, c2;
        findPosition(keyTable, text[i], &r1, &c1);
        findPosition(keyTable, text[i + 1], &r2, &c2);

        if (r1 == r2) {
            text[i] = keyTable[r1][(c1 + 4) % 5];
            text[i + 1] = keyTable[r2][(c2 + 4) % 5];
        } else if (c1 == c2) {
            text[i] = keyTable[(r1 + 4) % 5][c1];
            text[i + 1] = keyTable[(r2 + 4) % 5][c2];
        } else {
            text[i] = keyTable[r1][c2];
            text[i + 1] = keyTable[r2][c1];
        }
    }
}

int main() {
    char key[100];
    char text[500];
    char keyTable[5][5];

    printf("Enter keyword: ");
    if (fgets(key, sizeof(key), stdin) != NULL) {
        size_t len = strlen(key);
        if (len > 0 && key[len - 1] == '\n') {
            key[len - 1] = '\0';
        }
    }

    printf("Enter plaintext: ");
    if (fgets(text, sizeof(text), stdin) != NULL) {
        size_t len = strlen(text);
        if (len > 0 && text[len - 1] == '\n') {
            text[len - 1] = '\0';
        }
    }

    generateKeyTable(key, keyTable);

    printf("\n5x5 Key Matrix:\n");
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            printf("%c ", keyTable[r][c]);
        }
        printf("\n");
    }
    printf("\n");

    prepareText(text, text);
    printf("Prepared Text: %s\n", text);

    encryptPlayfair(keyTable, text);
    printf("Encrypted Text: %s\n", text);

    decryptPlayfair(keyTable, text);
    printf("Decrypted Text: %s\n", text);

    return 0;
}
