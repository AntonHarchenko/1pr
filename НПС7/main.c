#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, y1, r1, x2, y2, r2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    int d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    if (x1 = x2 && y1 == y2 && r1 == r2)
        printf("-1\n");
    if (d > fabs(r1 - r2) && d < (r1 + r2))
        printf("2\n");
    if (d == (r1 + r2))
        printf("1\n");
    if (d > (r1 + r2) || d < fabs(r1 - r2))
        printf("0\n");

    return 0;
}
