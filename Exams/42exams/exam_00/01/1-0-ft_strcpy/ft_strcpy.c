#include <stdio.h>

char *ft_strcpy(char *s1, char *s2);

int main (void)
{
        char s1[25] = "ç";
        char s2[25] = "larissa";

        printf("%s", ft_strcpy(s1, s2));
        return (0);
}

char *ft_strcpy(char *s1, char *s2)
{
        int i;

        i = 0;
        while(s2[i] != '\0')
        {
                if(s1[i] != s2[i])
                        s1[i] = s2[i];
                i++;
        }

        s1[i] = '\0';
        return (s1);
}
