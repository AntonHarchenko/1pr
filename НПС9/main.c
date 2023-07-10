#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, res, i = 1, token = 0;
    scanf("%d %d", &x, &y);
    res = x;
    if (0 <= x && x <= y && y <= pow(2, 31))
    {
        if (x == y)
            printf("0\n");
        else
        {
            do
            {
                res = res + i;
                i = 2;
                token++;
            }
            while (res != (y - 1) && res != (y - 2) && res != y);
            if (res == (y - 1))
                token++;
            if (res == (y - 2))
                token+=2;
            printf("%d\n", token);
        }
    }
    else
        printf("Error");
    return 0;
}
