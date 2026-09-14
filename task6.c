#include <stdio.h>
#include <string.h>

int findPatternIndex(char text[], char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == m)
            return i;
    }
    return -1;
}

int main() {
    char text[100], pattern[100];
    printf("Enter Text: ");
    scanf("%s", text);
    printf("Enter Pattern: ");
    scanf("%s", pattern);

    int index = findPatternIndex(text, pattern);
    if (index != -1)
        printf("Pattern found at index: %d\n", index);
    else
        printf("Pattern not found.\n");

    return 0;
}
