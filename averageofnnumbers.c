#include <stdio.h>

int main()
{
    int n, i;
    float num, sum = 0.0, avg;

    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of numbers entered.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", &num);
        sum += num;
    }

    avg = sum / n;
    printf("Average = %.2f\n", avg);
    return 0;
}
