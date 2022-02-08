#include <stdio.h>

/* copy input to an output, replace each blank with one or more blanks with a single blank */
int main()
{
    int c, prev_c;

    prev_c = EOF;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            if (prev_c != ' ')
                putchar(c);

        if (c != ' ')
            putchar(c);

        prev_c = c;
    }
    return 0;
}