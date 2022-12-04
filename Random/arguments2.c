#include <stdio.h>

int	ft_atoi(const char *nptr);

int main (int argc, char **argv)
{
        int a, b, result;

        a = ft_atoi(argv[1]);
        b = ft_atoi(argv[2]);

        result = a * b;
        printf("%d * %d = %d\n", a, b, result);
        return (0);
}

