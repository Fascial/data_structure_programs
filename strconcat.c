#include <stdio.h>

int main()
{
    char a[10];
    char b[10];
    char c[20];
    printf("String a: ");
    gets(a);
    printf("String b: ");
    gets(b);

    int i = 0, j = 0, k = 0;
    while (a[i] != '\0')
    {
        c[j] = a[i];
        i++;
        j++;
    }
    i = 0;
    while (b[i] != '\0')
    {
        c[j] = b[i];
        i++;
        j++;
    }
    c[j] = '\0';
    puts(c);
}
