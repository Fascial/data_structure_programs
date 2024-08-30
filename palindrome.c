#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    printf("Enter a string: ");
    scanf("%s", a);

    int str_len = strlen(a);

    int flag = 1;

    for (int i = 0; i < str_len / 2; i++)
    {
        if (a[i] != a[str_len - 1 - i])
            flag = 0;
    }

    if (flag)
        printf("%s is a palindrome\n", a);
    else
        printf("%s is not a palindrome\n", a);

    return 0;
}
