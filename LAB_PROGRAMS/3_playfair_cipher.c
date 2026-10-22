#include <stdio.h>
#include <string.h>
#include <ctype.h>

char mat[5][5];

void generateMatrix(char *key) {
    int vis[26] = {0};
    vis['J' - 'A'] = 1;
    int r = 0, c = 0;

    for (int i = 0; key[i] != '\0'; i++) {
        char ch = toupper(key[i]);
        if (ch == 'J') ch = 'I';
        if (isalpha(ch) && !vis[ch - 'A']) {
            vis[ch - 'A'] = 1;
            mat[r][c++] = ch;
            if (c == 5) { c = 0; r++; }
        }
    }

    for (int i = 0; i < 26; i++) {
        if (!vis[i]) {
            mat[r][c++] = 'A' + i;
            if (c == 5) { c = 0; r++; }
        }
    }
}

void findPos(char ch, int *r, int *c) {
    if (ch == 'J') ch = 'I';
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (mat[i][j] == ch) {
                *r = i;
                *c = j;
                return;
            }
        }
    }
}

void processText(char *in, char *out) {
    int len = 0;
    for (int i = 0; in[i] != '\0'; i++) {
        if (isalpha(in[i])) {
            char ch = toupper(in[i]);
            out[len++] = (ch == 'J') ? 'I' : ch;
        }
    }

    for (int i = 0; i < len; i += 2) {
        if (i == len - 1) {
            out[len++] = 'X';
            break;
        }
        if (out[i] == out[i + 1]) {
            for (int j = len; j > i + 1; j--) {
                out[j] = out[j - 1];
            }
            out[i + 1] = 'X';
            len++;
        }
    }
    out[len] = '\0';
}

void encrypt(char *str) {
    for (int i = 0; str[i] != '\0'; i += 2) {
        int r1, c1, r2, c2;
        findPos(str[i], &r1, &c1);
        findPos(str[i + 1], &r2, &c2);

        if (r1 == r2) {
            str[i] = mat[r1][(c1 + 1) % 5];
            str[i + 1] = mat[r2][(c2 + 1) % 5];
        } else if (c1 == c2) {
            str[i] = mat[(r1 + 1) % 5][c1];
            str[i + 1] = mat[(r2 + 1) % 5][c2];
        } else {
            str[i] = mat[r1][c2];
            str[i + 1] = mat[r2][c1];
        }
    }
}

int main() {
    char key[50], text[100], formatted[200];

    printf("Enter keyword: ");
    scanf("%s", key);
    getchar();

    printf("Enter plaintext: ");
    scanf("%[^\n]", text);

    generateMatrix(key);

    printf("\nKey Matrix (5x5):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }

    processText(text, formatted);
    printf("Formatted text: %s\n", formatted);

    encrypt(formatted);
    printf("Encrypted text: %s\n", formatted);

    return 0;
}
