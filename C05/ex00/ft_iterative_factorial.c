int ft_iterative_factorial(int nb)
{
    int i;
    int ret;

    if (nb < 0)
        return (0);
    if (nb < 2)
        return (1);
    i = nb;
    ret = 1;
    while (i > 1)
    {
        ret *= i;
        i--;
    }
    return (ret);
}