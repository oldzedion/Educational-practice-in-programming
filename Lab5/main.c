#include <stdio.h>


#define MOD 12345

int main() {
    int n;

    // 3читування вхідних даних
    printf("Enter the length of the sequence: ");
    scanf_s("%d", &n);

    // Перевірка коректності вводу
    if (n < 1 || n > 10000) {
        printf("Invalid value entered");
        return 0;
    }

    // Початкові значення
    int dp[10001] = { 0, 2, 4, 7 };

    // Обчислення кінцевих значень
    for (int i = 4; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    }

    // Виведення результату
    printf("Number of searched sequences: %d\n", dp[n]);
}