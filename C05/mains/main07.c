#include<stdlib.h>
#include<stdio.h>

int ft_find_next_prime(int nb);

int main(int argc, char const *argv[])
{
    int nb;
    int res;

    nb = 2;
    if (argc > 1)
        nb = atoi(argv[1]);
    res = ft_find_next_prime(nb);
    printf("el siguiente primo a  %d es %d\n", nb, res);
    return (0);
}
