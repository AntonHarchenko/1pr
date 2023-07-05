#include <stdio.h>
#include <math.h>

int main() {
    int p, num;

    scanf("%d", &p);

    if (p > 1 && p <= 30)
    {
        num = pow(p, 2) - ((p - 2) * 3);
        printf("%d\n", num);
    }
    else
        printf("Error\n");

    return 0;
}
