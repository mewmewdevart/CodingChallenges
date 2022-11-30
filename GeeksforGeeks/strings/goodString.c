#include <stdio.h>

/*
In this problem, a String S is composed of lowercase alphabets and wildcard characters i.e. '?'. Here, '?' can be replaced by any of the lowercase alphabets. Now you have to classify the given String on the basis of following rules:

If there are more than 3 consonants together or more than 5 vowels together, the String is considered to be "BAD". A String is considered "GOOD" only if it is not “BAD”.
*/

void ft_goodBad(char *str);

int main (void)
{
        ft_goodBad("larissa?");
        return (0);
}

void ft_goodBad(char *str)
{
        int i;
        int vowels;
        int consonants;

        i = 0;
        vowels = 0;
        consonants = 0;
        while(str[i] != '\0')
        {
                if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                        vowels++;
                if (str[i] > 'a' && str[i] <= 'z' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' || str[i] >= 58 && str[i] <= 64 )
                        consonants++;
                i++;
        }

        printf("A string contem %d consoantes e %d vogais juntas! ", consonants, vowels);
        if (vowels > 5  || vowels > 3 )
                printf("É uma string ruim! ");
        else
                printf("É uma string boa! ");
}
