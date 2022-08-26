int ft_iterative_power(int nb, int power)
{
    int i;
    int ret;

    ret = nb;
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    i = 1;
    while (i < power)
    {
        ret *= nb;
        i++;
    }
    return (ret); 
}