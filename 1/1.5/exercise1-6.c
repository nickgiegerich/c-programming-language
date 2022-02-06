#include <stdio.h>

int main()
{
    int c = (getchar() != EOF);
    printf("The expression getchar() != EOF is equal to %3d\n", c);
}