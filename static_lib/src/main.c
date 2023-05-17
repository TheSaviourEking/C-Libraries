#include "math.h"

int main(void) {
    puts("My Math Library Project");

    float a = 12, b = 34;

    printf("The division of %lf and %lf is %lf\n", a, b, divide(a, b));
    printf("The multiplication of %lf and %lf is %lf\n", a, b, multiply(a, b));
    printf("The addition of %lf and %lf is %lf\n", a, b, add(a, b));
    printf("The subtraction of %lf and %lf is %lf\n", a, b, subtract(a, b));

    return (EXIT_SUCCESS);
}
