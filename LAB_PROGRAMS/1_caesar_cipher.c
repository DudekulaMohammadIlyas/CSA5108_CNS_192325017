#include <stdio.h>
#include <ctype.h>
#include <string.h>

void encryptCaesar(char *text, int k) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (isupper((unsigned char)text[i])) {
            text[i] = (char)((text[i] - 'A' + k) % 26 + 'A');
        } else if (islower((unsigned char)text[i])) {
            text[i] = (char)((text[i] - 'a' + k) % 26 + 'a');
        }
    }
}

void decryptCaesar(char *text, int k) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (isupper((unsigned char)text[i])) {
            text[i] = (char)((text[i] - 'A' - k + 26) % 26 + 'A');
        } else if (islower((unsigned char)text[i])) {
            text[i] = (char)((text[i] - 'a' - k + 26) % 26 + 'a');
        }
    }
}

int main() {
    char text[500];
    int k;

    printf("Enter plaintext: ");
    if (fgets(text, sizeof(text), stdin) != NULL) {
        size_t len = strlen(text);
        if (len > 0 && text[len - 1] == '\n') {
            text[len - 1] = '\0';
        }
    }

    printf("Enter key k (1-25): ");
    if (scanf("%d", &k) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (k < 1 || k > 25) {
        printf("Key must be between 1 and 25.\n");
        return 1;
    }

    encryptCaesar(text, k);
    printf("Encrypted text: %s\n", text);

    decryptCaesar(text, k);
    printf("Decrypted text: %s\n", text);

    return 0;
}
