//
// Created by fecoe on 23/10/2020.
//
#include "libft.h"

int	ft_occurance(char *s1, char *s2)
{
    int	index_s1;
    int	index_s2;

    index_s1 = -1;
    while (s1[++index_s1])
    {
        index_s2 = -1;
        while (s2[++index_s2])
        {
            if (s1[index_s1] == s2[index_s2])
                return (1);
        }
    }
    return (0);
}