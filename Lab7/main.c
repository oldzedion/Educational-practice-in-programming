#include <stdio.h>
#include <math.h>

// ������� ��� ���������� ������� ����� �������� ���� ����
int calculateIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    // ���������� ������ �� �������� ����
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // ���������� ������� ����� ��������
    if (distance == 0 && r1 == r2) {
        // ���� ��������, ��������� ������ ����� ��������
        return -1;
    }
    else if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        // ���� �� ����� ����� ��������
        return 0;
    }
    else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        // ���� ���������� ����� ��� ��������
        return 1;
    }
    else {
        // ���� ����� �� ����� ��������
        return 2;
    }
}

int main() {
    
    int x1, y1, r1, x2, y2, r2;
    printf("Enter the coordinates and radius of the first circle (x1 y1 r1): ");
    scanf_s("%d %d %d", &x1, &y1, &r1);
    printf("Enter the coordinates and radius of the second circle (x2 y2 r2): ");
    scanf_s("%d %d %d", &x2, &y2, &r2);

    // ������ ������� ��� ���������� ������� ����� ��������
    int result = calculateIntersectionPoints(x1, y1, r1, x2, y2, r2);

    // ��������� ����������
    if (result == -1) {
        printf("There are infinitely many intersection points\n");
    }
    else {
        printf("Number of crossing points: %d\n", result);
    }

    return 0;
}