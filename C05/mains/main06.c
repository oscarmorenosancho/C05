#include<stdlib.h>
#include<stdio.h>

int ft_is_prime(int nb);

int main(int argc, char const *argv[])
{
    int nb;
    int res;

    nb = 2;
    if (argc > 1)
        nb = atoi(argv[1]);
    res = ft_is_prime(nb);
    printf("%d %ses primo\n", nb, (res) ?"":"no ");
    return (0);
}
