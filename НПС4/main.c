#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, t = 0;
    printf("������ ���������� ����� n: ");
    scanf("%d", &n);
    if (n > 150 || n < 1)
        printf("Error");
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == n / i)
                t++;
        }
    printf("ʳ������ ����� ������� ����� %d: %d\n", n, t);
    }
    return 0;
}
