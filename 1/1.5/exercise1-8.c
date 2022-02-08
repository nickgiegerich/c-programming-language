#include <stdio.h>

/* count blanks, tabs, and newlines */
int main()
{
    int c, nl, bl, nt;

    nl = bl = nt = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++bl;
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
    }

    printf("Number of blanks: %3d\nNumber of newlines: %3d\nNumber of tabs: %3d\n", bl, nl, nt);
}