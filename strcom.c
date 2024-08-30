#include <stdio.h>

int main()
{
    char a[10];
    char b[10];

    printf("String a: ");
    gets(a);
    printf("String b: ");
    gets(b);

    int i = 0, j = 0, k = 0;
    while (a[i] != '\0' || b[i] != '\0')
    {
        if (a[j] == b[k])
        {
            j++;
            k++;
        }
        else
        {
            printf("Not the same\n");
            break;
        }
        i++;
    }
    if (a[j] == b[k])
        printf("Are the same\n");
}
