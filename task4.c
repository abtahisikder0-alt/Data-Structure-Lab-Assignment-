#include <stdio.h>

int LENGTH(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

char GETCHAR(char str[], int n) {
    return str[n];
}

void PUTCHAR_FUNC(char str[], int n, char c) {
    str[n] = c;
}

int POS(char str1[], char str2[]) {
    int len1 = LENGTH(str1), len2 = LENGTH(str2);
    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) break;
        }
        if (j == len2) return i;
    }
    return -1;
}

void CONCAT(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i + j] = str2[j];
        j++;
    }
    result[i + j] = '\0';
}

void SUBSTRING(char str[], int i, int m, char result[]) {
    int k;
    for (k = 0; k < m && str[i + k] != '\0'; k++) {
        result[k] = str[i + k];
    }
    result[k] = '\0';
}

void DELETE(char str[], int i, int m) {
    int len = LENGTH(str);
    for (int k = i; k + m <= len; k++) {
        str[k] = str[k + m];
    }
}

void INSERT(char str1[], int i, char str2[]) {
    char temp[200];
    int len1 = LENGTH(str1), len2 = LENGTH(str2);
    int k;
    for (k = 0; k < i; k++) temp[k] = str1[k];
    for (int j = 0; j < len2; j++) temp[k++] = str2[j];
    for (int j = i; j < len1; j++) temp[k++] = str1[j];
    temp[k] = '\0';
    
    int z = 0;
    while(temp[z] != '\0') {
        str1[z] = temp[z];
        z++;
    }
    str1[z] = '\0';
}

int COMPARE(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char s1[100] = "Hello World";
    char s2[100] = "World";
    char res[200];

    printf("Length of s1: %d\n", LENGTH(s1));
    printf("Char at index 1: %c\n", GETCHAR(s1, 1));
    
    PUTCHAR_FUNC(s1, 0, 'h');
    printf("After PUTCHAR: %s\n", s1);

    printf("Position of s2 in s1: %d\n", POS(s1, s2));

    SUBSTRING(s1, 6, 5, res);
    printf("Substring: %s\n", res);

    DELETE(s1, 0, 6);
    printf("After Delete: %s\n", s1);

    INSERT(s1, 0, "hello ");
    printf("After Insert: %s\n", s1);

    printf("Compare result: %d\n", COMPARE("abc", "abc"));
    return 0;
}
