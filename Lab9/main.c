#include <stdio.h>
#include <math.h>

// ‘ункц≥€ обчисленн€ к≥лькост≥ крок≥в
long minSteps(long x, long y) {
    long distance = y - x;

    // «находимо максимально можливу довжину кроку
    long step = (long)sqrt(distance);

    // ќбчислюЇмо залишок в≥дстан≥ п≥сл€ того, €к ми зробили максимальну к≥льк≥сть крок≥в з довжиною
    long remaining = distance - step * step;

    // якщо залишок дор≥внюЇ нулю, це означаЇ, що ми змогли д≥йти до y, робл€чи кроки з максимальною довжиною.
    // “од≥ м≥н≥мальна к≥льк≥сть крок≥в - це (2 * step - 1).
    if (remaining == 0) {
        return 2 * step - 1;
    }

    // якщо залишок менше або дор≥внюЇ step, це означаЇ, що нам потр≥бен ще один крок, щоб д≥йти до y.
    // “од≥ м≥н≥мальна к≥льк≥сть крок≥в - це (2 * step).
    else if (remaining <= step) {
        return 2 * step;
    }

    // якщо залишок б≥льше, н≥ж step, це означаЇ, що нам потр≥бно зробити ще два кроки, щоб д≥йти до y.
    // “од≥ м≥н≥мальна к≥льк≥сть крок≥в - це (2 * step + 1).
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