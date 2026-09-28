#include <stdio.h>
#include <math.h>
double calculate_V(double x, double y)
{
if ((x+y) <=2.0)
{
double usl1 = pow( fabs(sin(x)),y);

double usl2 = pow( y + x, 1.0 /5.0);

return fmax(usl1, usl2);
}
else
{
return (x * x) + (y * y);
}
}
int main()
{
double x,y, V_value;

double x_start = 0.1;
double x_end = 1.0;
double hx = 0.6;

double y_start = 1.0;
double y_end = 2.0;
double hy = 0.7;

printf("     x        y         V\n"); 
printf("-------------------------------\n");

for (x = x_start; x <= x_end + hx / 2.0; x += hx)
{
for (y = y_start; y<= y_end + hy / 2.0; y += hy)
{
V_value = calculate_V(x, y);
printf("%8.2f %8.2f %12.6f\n", x, y, V_value);
}
}
return 0;
}
