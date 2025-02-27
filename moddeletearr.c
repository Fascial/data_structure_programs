#include <stdio.h>
#include <stdlib.h>

void del(int A[], int e, int *n)
{
    int index = -1;
    for (int j = 0; j < *n; j++)
    {
        if (A[j] == e)
        {
            index = j;
            break;
        }
    }
    if (index == -1)
    {
        printf("Element not found in the array\n");
        return;
    }
    for (int k = index; k < *n; k++)
    {
        A[k] = A[k + 1];
    }
    *n = *n - 1;
}

int main()
{
    int n, e, index;
    printf("Array length: ");
    scanf("%d", &n);

    int *A = (int *)malloc(sizeof(int) * n);

    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("The entered array is: \n");
    for (int i = 0; i < n; i++)
        printf("%d\t", A[i]);

    printf("Enter the element to be deleted from the array: ");
    scanf("%d", &e);

    for (int i = 0; i <= n; i++)
    {
        if (A[i] == e)
        {
            del(A, e, &n);
            i--;
        }
    }

    printf("After deleting, the array is: \n");
    for (int i = 0; i < n; i++)
        printf("%d\t", A[i]);
}
