/*
** EPITECH PROJECT, 2021
** MY_STR_ISALPHA
** File description:
** Check is strings contains alpha num
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != 0; ++i) {
        if (is_alpha(str[i]) == 0)
            return 0;
    }
    return 1;
}
