#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int pos, len;

    printf("Enter string: ");
    scanf("%s", str);
    printf("Enter starting position to delete: ");
    scanf("%d", &pos);
    printf("Enter length of text to delete: ");
    scanf("%d", &len);

    int total_len = strlen(str);
    for (int i = pos; i + len <= total_len; i++) {
        str[i] = str[i + len];
    }

    printf("Modified string: %s\n", str);
    return 0;
}
