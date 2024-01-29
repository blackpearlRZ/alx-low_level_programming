#include "main.h"

/**
 * printf_string - Print a string.
 * @val: Argument.
 * Return: The length of the string.
 */
int printf_string(va_list val)
{
    char *s;
    int len, i;

    s = va_arg(val, char *);

    if (s == NULL)
        s = "(null)";

    len = _strlen(s);

    for (i = 0; i < len; i++)
        _putchar(s[i]);

    return len;
}

