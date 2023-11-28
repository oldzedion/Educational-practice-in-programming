#include <stdio.h>

// Рекурсивна функція для підрахунку кількості чисел із р розрядів
long long countNumbersRec(int r, int currentDigit, int prevDigit) {
    // Базовий випадок: досягнуто останнього розряду
    if (currentDigit == r) {
        return 1;
    }

    // Ініціалізація змінних
    long long count = 0;

    // Перевірка можливих цифр для поточного розряду (5 або 9)
    for (int digit = 5; digit <= 9; digit += 4) {
        // Перевірка, щоб три однакові цифри не стояли поруч
        if (digit != prevDigit) {
            // Знайдено допустиму комбінацію цифр, переходимо до наступного розряду
            count += countNumbersRec(r, currentDigit + 1, digit);
        }
    }

    return count;
}

// Функція для підрахунку кількості чисел із р розрядів
int countNumbers(int r) {
    if (r < 1 || r > 30) {
        printf("Incorrect input. Digits must be between 1 and 30.\n");
        return -1;
    }

    long long count = 0;
    int prevDigit = -1; // Попередня цифра (ініціалізується значенням, яке не зустрічається)

    // Цикл по розрядам числа
    for (int i = 0; i < r; ++i) {
        // Перевірка можливих цифр для поточного розряду (5 або 9)
        for (int digit = 5; digit <= 9; digit += 4) {
            // Перевірка, щоб три однакові цифри не стояли поруч
            if (digit != prevDigit) {
                // Знайдено допустиму комбінацію цифр, переходимо до наступного розряду
                count += countNumbersRec(r, i + 1, digit);
            }
        }
    }

    return count;
}

int main() {
    // Введення кількості розрядів
    int r;
    printf("Enter the number of digits (p <= 30): ");
    scanf_s("%d", &r);

    // Виклик функції для підрахунку кількості чисел
    long long result = countNumbers(r);

    // Виведення результату
    if (result != -1) {
        printf("Number of numbers with %d digits: %lld\n", r, result);
    }

    return 0;
}