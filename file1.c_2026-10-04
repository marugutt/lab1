#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculate_U(double x, double y)
{
    if (x / (y * y) < 1.0)
    {
        double a = exp(1.0) * sin(x * x) - sqrt(y);
        double b = 1.0 / tan(cbrt(x * y * y));

        return (a > b) ? a : b;
    }
    else
    {
        return cos(x * y * y);
    }
}

int main(int argc, char *argv[])
{
    double x, y, U;
    double step_x, step_y;

    if (argc != 3)
    {
        printf("Usage: %s step_x step_y\n", argv[0]);
        return 1;
    }

    step_x = atof(argv[1]);
    step_y = atof(argv[2]);

    if (step_x <= 0 || step_x > 2)
    {
        printf("Error: step_x must be in (0, 2].\n");
        return 1;
    }

    if (step_y <= 0 || step_y > 2)
    {
        printf("Error: step_y must be in (0, 2].\n");
        return 1;
    }

    printf("     x        y          U\n");
    printf("--------------------------------\n");

    for (x = 1.0; x <= 3.0; x += step_x)
    {
        for (y = 2.0; y <= 4.0; y += step_y)
        {
            U = calculate_U(x, y);
            printf("%8.2f %8.2f %12.6f\n", x, y, U);
        }
    }

    return 0;
}
