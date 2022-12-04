#include <unistd.h>

static int ft_strlen(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                i++;
        }
        return (i);
}
int main (int argc, char **argv)
{
        write(1, argv[1], ft_strlen(argv[1]));
        write(1, "\n", 1);        
        return (0);
}
