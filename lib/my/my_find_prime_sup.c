/*
** EPITECH PROJECT, 2021
** MY_FIND_PRIME_SUP
** File description:
** Find the first prime number superior
*/

int my_compute_power_it(int nb, int p);
int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    while (1) {
        if (my_is_prime(nb) == 1)
            return nb;
        nb++;
    }
}
