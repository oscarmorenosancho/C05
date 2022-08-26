#include<stdlib.h>
#include<stdio.h>

int ft_iterative_power(int nb, int power);

int main(int argc, char const *argv[])
{
    int nb;
    int power;
    int res;

    nb = 2;
    power = 1;
    if (argc > 2)
    {
        nb = atoi(argv[1]);
        power = atoi(argv[2]);
    }
    res = ft_iterative_power(nb);
    printf("%d^%d = %d\n", nb, power, res);
    return (0);
}