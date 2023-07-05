#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, i, t = 0;

    scanf("%d", &p);

    if (p >= 2 && p <= 20)
    {
        int arr[p];

        for (i = 0; i < p; i++)
        {
            scanf("%d", &arr[i]);
        }

        t = arr[0];
        for (i = 1; i < p; i++)
        {
            int a = t;
            int b = arr[i];

            while (a != b)
            {
                if (a > b)
                    a -= b;
                else
                    b -= a;
            }

            t = (t * arr[i]) / a;
        }

        printf("%d\n", t);
    }
    else
    {
        printf("Error\n");
    }

    return 0;
}
