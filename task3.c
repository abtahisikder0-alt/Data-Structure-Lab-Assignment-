#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void sieveOfEratosthenes(int n) {
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    printf("Prime numbers up to %d: ", n);
    for (int p = 2; p <= n; p++) {
        if (prime[p])
            printf("%d ", p);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter limit (n): ");
    scanf("%d", &n);
    sieveOfEratosthenes(n);
    return 0;
}
