#include <stdio.h>
#include <ctype.h>

void caesar(char *str, int k) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = (str[i] - 'A' + k) % 26 + 'A';
        } else if (islower(str[i])) {
            str[i] = (str[i] - 'a' + k) % 26 + 'a';
        }
    }
}

int main() {
    char str[100];
    int k;

    printf("Enter string: ");
    scanf("%[^\n]", str);

    printf("Enter key (1-25): ");
    scanf("%d", &k);

    caesar(str, k);
    printf("Encrypted: %s\n", str);

    caesar(str, 26 - k);
    printf("Decrypted: %s\n", str);

    return 0;
}
