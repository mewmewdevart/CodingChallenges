#include <unistd.h>

/*
        argc – é um valor inteiro que indica a quantidade de argumentos que foram passados ao chamar o programa.
        argv – é um vetor de char que contém os argumentos, um para cada string passada na linha de comando.
*/
static char ft_putchar(char ch)
{
        write(1, &ch, 1);
}

static char last_param(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                ft_putchar(str[i]);
                i++;
        }
        ft_putchar('\n');
        return (str[i]);
}
int main (int argc, char **argv)
{
        if (argc < 2)
                ft_putchar('\n');
        else
                last_param(argv[argc-1]);
        return (0);
}
