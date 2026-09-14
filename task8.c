#include <stdio.h>
#include <string.h>

int main() {
    char str[100], text[50], result[150];
    int pos, i, j = 0;

    printf("Enter main string: ");
    scanf("%s", str);
    printf("Enter text to insert: ");
    scanf("%s", text);
    printf("Enter position: ");
    scanf("%d", &pos);

    for (i = 0; i < pos; i++) {
        result[j++] = str[i];
    }
    for (int k = 0; k < strlen(text); k++) {
        result[j++] = text[k];
    }
    for (i = pos; i < strlen(str); i++) {
        result[j++] = str[i];
    }
    result[j] = '\0';

    printf("Result string: %s\n", result);
    return 0;
}
