#include <stdio.h>
#include <string.h>


#define MAX_CHARS 128

// Функція для обчислення факторіалу числа
unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Функція для обчислення кількості анаграм
unsigned long long countAnagrams(char* str) {
    int length = strlen(str);
    int count[MAX_CHARS] = { 0 };
    for (int i = 0; i < length; i++) {
        count[(int)str[i]]++;
    }

    unsigned long long anagramCount = factorial(length);
    for (int i = 0; i < MAX_CHARS; i++) {
        if (count[i] > 1) {
            anagramCount /= factorial(count[i]);
        }
    }

    return anagramCount;
}

int main() {
    char str[15];

    // Зчитування вхідних даних
    printf("Enter a word (no more than 14 letters): ");
    scanf_s("%s", str, sizeof(str));

    // Перевірка коректності вводу
    if (strlen(str) > 14) {
        printf("Invalid value entered");
        return 0;
    }

    printf("The number of possible anagrams is: %llu\n", countAnagrams(str));
    return 0;
}