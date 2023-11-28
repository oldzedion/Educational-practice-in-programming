#include <stdio.h>

int main() {
    
    int t1, t2, t3;
    double total_time;

    // ���������� ������� �����
    printf("Enter three values: ");
    scanf_s("%d %d %d", &t1, &t2, &t3);

    // �������� ���������� �����
    if (t1 > 10000 || t2 > 10000 || t3 > 10000) {
        printf("Invalid value entered");
        return 0;
    }

    // ���������� ���������� ����
    total_time = 1.0 / (1.0 / t1 + 1.0 / t2 + 1.0 / t3);

    // ��������� ����������
    printf("Time required to eat the pie: %.2f\n", total_time);
}