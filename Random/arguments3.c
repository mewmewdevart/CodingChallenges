#include <stdio.h>

int	ft_atoi(const char *nptr);

int main (int argc, char **argv)
{
        unsigned  int number, calc;

        calc = ft_atoi(argv[1]);
        number = 0;
        while (number != calc)
        {
                printf("%d * %d = %d\n", calc, number,calc * number);
                number++;
        }
        return (0);
}
