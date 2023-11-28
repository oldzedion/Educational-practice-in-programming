#include <stdio.h>
#include <math.h>

// ������� ���������� ������� �����
long minSteps(long x, long y) {
    long distance = y - x;

    // ��������� ����������� ������� ������� �����
    long step = (long)sqrt(distance);

    // ���������� ������� ������ ���� ����, �� �� ������� ����������� ������� ����� � ��������
    long remaining = distance - step * step;

    // ���� ������� ������� ����, �� ������, �� �� ������ ���� �� y, ������� ����� � ������������ ��������.
    // ��� �������� ������� ����� - �� (2 * step - 1).
    if (remaining == 0) {
        return 2 * step - 1;
    }

    // ���� ������� ����� ��� ������� step, �� ������, �� ��� ������� �� ���� ����, ��� ���� �� y.
    // ��� �������� ������� ����� - �� (2 * step).
    else if (remaining <= step) {
        return 2 * step;
    }

    // ���� ������� �����, �� step, �� ������, �� ��� ������� ������� �� ��� �����, ��� ���� �� y.
    // ��� �������� ������� ����� - �� (2 * step + 1).
    else {
        return 2 * step + 1;
    }
}

int main() {
    long x, y;
    printf("Enter the x and y: ");
    scanf_s("%ld %ld", &x, &y);

    printf("Minimum number of steps: %ld\n", minSteps(x, y));
}