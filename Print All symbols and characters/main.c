#include <stdio.h>
#include <stdlib.h>

int main()
{
    char uppercase_letters[] = "ABC";
    char lowercase_letters[] = "abc";
    char digits[] = "012";
    char symbols[] = "$*+/ ";

    printf("Integer equivalents:\n");

    for (int x = 0; x < sizeof(uppercase_letters)-1; x++)
    {
        printf("'%c': %d\n", uppercase_letters[x], uppercase_letters[x]);
    }

    for (int x = 0; x < sizeof(lowercase_letters)-1; x++)
    {
        printf("'%c': %d\n", lowercase_letters[x], lowercase_letters[x]);
    }

    for (int x = 0; x < sizeof(digits)-1; x++)
    {
        printf("'%c': %d\n", digits[x], digits[x]);
    }
    for (int x = 0; x < sizeof(symbols)-1; x++)
    {
        printf("'%c': %d\n", symbols[x], symbols[x]);
    }
    return 0;
}
