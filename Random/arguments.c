#include <stdio.h>

int main (int argc, char **argv)
{
        int i;

        i = 0;
        while(i < argc)
        {
                printf("%d Parametro: %s\n", i, argv[i]);
                i++;
        }
        return (0);
}
