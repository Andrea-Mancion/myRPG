
#include <stdlib.h>
#include <stdio.h>

char *my_revstr(char *str);

static size_t count_number_number(int i)
{
    size_t nbr = 1;

    for (; i > 10; nbr++, i /= 10);
    return nbr;
}

char *itoa(int i)
{
    int nbr = count_number_number(i);
    size_t s = 0;
    char *str = malloc(sizeof(char) * (nbr + 1));

    for (size_t x = 0; i > 10; x++, i /= 10) {
        s = i % 10;
        str[x] = s + 48;
    }
    str[nbr - 1] = i + 48;
    str[nbr] = '\0';
    str = my_revstr(str);
    return str;
}
