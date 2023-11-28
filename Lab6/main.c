#include <stdio.h>
#include <math.h>

double calculateVectorLength(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x1, y1, x2, y2;

    printf("Enter the coordinates of the starting point of the vector (x1 y1): ");
    scanf_s("%d %d", &x1, &y1);
    printf("Enter the coordinates of the end point of the vector (x2 y2): ");
    scanf_s("%d %d", &x2, &y2);

    double result = calculateVectorLength(x1, y1, x2, y2);
    printf("Vector length: %.6f\n", result);

    return 0;
}