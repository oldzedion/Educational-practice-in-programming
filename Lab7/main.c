#include <stdio.h>
#include <math.h>

// Функція для обчислення кількості точок перетину двох кола
int calculateIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    // Обчислення відстані між центрами колів
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Визначення кількості точок перетину
    if (distance == 0 && r1 == r2) {
        // Кола ідентичні, безкінечно багато точок перетину
        return -1;
    }
    else if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        // Кола не мають точок перетину
        return 0;
    }
    else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        // Кола торкаються ззовні або всередині
        return 1;
    }
    else {
        // Кола мають дві точки перетину
        return 2;
    }
}

int main() {
    
    int x1, y1, r1, x2, y2, r2;
    printf("Enter the coordinates and radius of the first circle (x1 y1 r1): ");
    scanf_s("%d %d %d", &x1, &y1, &r1);
    printf("Enter the coordinates and radius of the second circle (x2 y2 r2): ");
    scanf_s("%d %d %d", &x2, &y2, &r2);

    // Виклик функції для обчислення кількості точок перетину
    int result = calculateIntersectionPoints(x1, y1, r1, x2, y2, r2);

    // Виведення результату
    if (result == -1) {
        printf("There are infinitely many intersection points\n");
    }
    else {
        printf("Number of crossing points: %d\n", result);
    }

    return 0;
}