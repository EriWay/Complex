#include <stdio.h>

void eratosthenes(int n) {
    int is_prime[n];
    for (int i = 0; i < n; i++) {
        is_prime[i] = 1;
    }
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i < n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < n; j += i) {
                is_prime[j] = 0;
            }
        }
    }
    for (int i = 2; i < n; i++) {
        if (is_prime[i]) {
            printf("%d ", i);
        }
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    eratosthenes(n);
    return 0;
}

//Complex = n log( log(n))  Askip