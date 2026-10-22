#include <stdio.h>
#include <ctype.h>

void encrypt(char *str, char *key) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = toupper(key[str[i] - 'A']);
        } else if (islower(str[i])) {
            str[i] = tolower(key[str[i] - 'a']);
        }
    }
}

void decrypt(char *str, char *key) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char ch = str[i];
            for (int j = 0; j < 26; j++) {
                if (toupper(ch) == toupper(key[j])) {
                    str[i] = isupper(ch) ? ('A' + j) : ('a' + j);
                    break;
                }
            }
        }
    }
}

int main() {
    char str[100], key[30];

    printf("Enter 26-letter key: ");
    scanf("%s", key);
    getchar();

    printf("Enter string: ");
    scanf("%[^\n]", str);

    encrypt(str, key);
    printf("Encrypted: %s\n", str);

    decrypt(str, key);
    printf("Decrypted: %s\n", str);

    return 0;
}
