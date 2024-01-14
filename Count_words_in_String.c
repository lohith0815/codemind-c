#include <stdio.h>

int main() {
    char inputString[100];
    int wordCount = 0;
    int i = 0;
    scanf("%[^
]", inputString);

    // Iterate through each character in the string
    while (inputString[i] != NULL) {
        // Check for spaces or tabs to identify word boundaries
        if (inputString[i] == ' ' || inputString[i] == '	') {
            wordCount++;
        }
        i++;
    }

    // Add 1 to account for the last word
    wordCount++;

    printf("%d", wordCount);
    return 0;
}
