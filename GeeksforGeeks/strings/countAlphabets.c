#include <stdio.h>

//Given a string, The task is to count the number of alphabets present in the string.

int numberAlfa(char *str);

int main (void)
{
        printf("A string tem %d numeros! ", numberAlfa("amo bolo 41"));
        return (0);
}

int numberAlfa(char *str)
{
        int i, count;

        i = 0;
        count = 0;
        while(str[i] != '\0')
        {
                if (str[i] >= '0' && str[i] <= '9')
                        count++;
                i++;
        }
        return (count);
}
