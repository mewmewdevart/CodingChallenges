#include <stdio.h>

/*
Given a string of length N, made up of only uppercase characters 'R' and 'G', where 'R' stands for Red and 'G' stands for Green.Find out the minimum number of characters you need to change to make the whole string of the same colour. 
*/

void red_or_green(char *str);

int main (void)
{
        red_or_green("GRRRG");
        return (0);
}

void red_or_green(char *str)
{
        int i, red, green;

        i = 0;
        red = 0;
        green = 0;
        while(str[i] != '\0')
        {
                if (str[i] == 'R')
                        red++;
                if (str[i] == 'G')
                        green++;
                str++;
        }

        printf("Tem %d verdes e %d vermelhos! \n", green, red);
        if (green != red && green > red)
                printf("Green é diferente e maior do que red em %d de diferença! \n", green-red);
        else
                if (red != green && red > green)
                        printf("Red é diferente e maior do que green em %d de diferença! \n", red-green);
                else
                        printf("Informação invalida! ");
}
