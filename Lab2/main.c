#include <stdio.h>

// ���������� ������� ��� ����������� ���������� �������� �������
int findDivider(int a, int b) {
    // ���� ������
    if (b == 0) {
        return a;
    }

    // ������������ ������ ��� ���� ������������ �������
    return findDivider(b, a % b);
}

// ������� ��� ����������� ���������� �������� ��������
int findLCM(int arr[], int n) {
    int lcm = arr[0];

    // �������� �������� ��� ������ ������ ������, � ����� ��� ���������� ����� ������ ����� ���������
    for (int i = 1; i < n; i++) {
        lcm = (lcm * arr[i]) / findDivider(lcm, arr[i]);
    }

    return lcm;
}

int main() {
    int n;
    int arr[20];

    // ���������� ������� �����
    printf("Enter the number of input numbers: ");
    scanf_s("%d", &n);

    // �������� ���������� �����
    if (n <= 2 || n > 20) {
        printf("Invalid value entered");
        return 0;
    }

    // ���������� �����
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);

        // �������� ���������� �����
        if (arr[i] == 0) {
            printf("Invalid value entered");
            return 0;
        }
    }

    // ��������� ����������
    printf("Least common multiple: %d\n", findLCM(arr, n));
}