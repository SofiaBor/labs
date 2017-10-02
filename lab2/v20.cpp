#include <math.h>
#include <stdio.h>

int main() {
  double x, y, a = 12.5, b = 1.3, c = 14.1, d = 2.7, n = 4.0, m = 8.0, t1, t2,
               ax;

  printf("Vvedite x, y >");
  scanf("%lf %lf", &x, &y);

  ax = (a - x) * (a + x);
  t1 = log((pow(a, 2) + pow(x, 2)) / ax) / (4 * pow(a, 3));

  ax = a * x;
  t2 = (pow(cos(ax), n - 1)) / (a * (m - 1) * pow(sin(ax), m - 1));

  printf("t1 = %lg\n", t1);
  printf("t2 = %lg\n", t2);
  return 0;
}
