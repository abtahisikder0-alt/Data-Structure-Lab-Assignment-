#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];
    printf("Enter main string: ");
    gets(str);
    printf("Enter substring: ");
    gets(sub);

    char *pos = strstr(str, sub);

    if (pos != NULL) {
        printf("Substring found at starting position/index: %ld\n", pos - str);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}
