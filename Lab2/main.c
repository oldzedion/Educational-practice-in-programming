#include <stdio.h>

// Рекурсивна функція для знаходження найменшого спільного дільника
int findDivider(int a, int b) {
    // База рекурсії
    if (b == 0) {
        return a;
    }

    // Використання рекурсії для більш читабельного вигляду
    return findDivider(b, a % b);
}

// Функція для знаходження найменшого спільного кратного
int findLCM(int arr[], int n) {
    int lcm = arr[0];

    // Виконуємо операції над кожним числом масиву, і кожен раз присвоюємо нашій кінцевій змінній результат
    for (int i = 1; i < n; i++) {
        lcm = (lcm * arr[i]) / findDivider(lcm, arr[i]);
    }

    return lcm;
}

int main() {
    int n;
    int arr[20];

    // Зчитування кількості чисел
    printf("Enter the number of input numbers: ");
    scanf_s("%d", &n);

    // Перевірка коректності вводу
    if (n <= 2 || n > 20) {
        printf("Invalid value entered");
        return 0;
    }

    // Зчитування чисел
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);

        // Перевірка коректності вводу
        if (arr[i] == 0) {
            printf("Invalid value entered");
            return 0;
        }
    }

    // Виведення результату
    printf("Least common multiple: %d\n", findLCM(arr, n));
}