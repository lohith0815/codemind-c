#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, equal = 1;
    scanf("%[^
]", str1);
    scanf(" %[^
]", str2);

    // Compare each character
    for (i = 0; str1[i] != NULL || str2[i] != NULL; i++) {
        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }
    }

    if (equal) {
        printf("Strings are Equal
");
    } else {
        printf("Strings are not Equal
");
    }

    return 0;
}
