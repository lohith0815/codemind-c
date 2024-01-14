#include <stdio.h>

int main() {
    char inputString[100];
    int vowels = 0;
    scanf("%[^
]", inputString);

    for (int i = 0; inputString[i] != NULL; i++) {
        char ch = inputString[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch += 32; // Convert uppercase to lowercase
        }
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    printf("%d", vowels);
    return 0;
}
