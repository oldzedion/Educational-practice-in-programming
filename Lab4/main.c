#include <stdio.h>

// ������� ��� ��������� ������� ����� �������
int function(int n) {
    int count = 0;

    // ���� ��������� ����� �������
    for (int m = n / 2; m <= n; m++) {
        if (n % m == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;

    // ���������� ������� ������
    printf("Enter a natural number n (1 < n < 150): ");
    scanf_s("%d", &n);

    // �������� ���������� �����
    if (n < 1 || n > 150) {
        printf("Invalid value entered");
        return 0;
    }

    // ��������� ����������
    printf("The number of equal divisors of a number %d: %d", n, function(n));
}