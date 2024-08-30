#include <stdio.h>

void hexadecimal(int n)
{
    int r;
    if (n == 0)
        return;
    else
    {
        r = n % 16;
        hexadecimal(n / 16);
    }
    if (r > 9)
        printf("%c", 'A' + (r - 10));
    else
        printf("%d", r);
}

int main()
{
    int n;

    printf("Enter a valid hexadecimal number: ");
    scanf("%d", &n);
    hexadecimal(n);
}
