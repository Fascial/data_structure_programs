#include <stdio.h>
int main()
{
    char str[10];

    printf("Enter a lowercase string: ");
    gets(str);
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = str[i] - 32;
        i++;
    }
    puts(str);
}
