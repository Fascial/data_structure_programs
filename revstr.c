#include <stdio.h>
int main()
{
   char a[10];

   printf("Enter string a: ");
   gets(a);

   int i = 0, l = 0, j = 0;

   while (a[i] != '\0')
   {
      l++;

      i++;
   }
   for (i = 0, j = l - 1; i <= j; i++, j--)
   {
      char ch = a[i];
      a[i] = a[j];
      a[j] = ch;
   }
   puts(a);
}
