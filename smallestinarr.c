#include <stdio.h>

int main()
{
    int arr[10];
    int n;

    printf("Enter array length: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Minimum element: %d\n", min);
    return 0;
}
