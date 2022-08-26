int ft_is_prime(int nb)
{
    int i;

    if (nb < 2)
        return (0);
    if (nb < 4 || nb == 5 || nb == 7)
        return (1);
    if (nb % 2 == 0)
        return (0);
    i = 3;
    while (i < nb/2)
    {
        if (nb % i == 0)
            return (0);
        i += 2;
    }
    return (1);   
}

int ft_find_next_prime(int nb)
{
    int next_to_check;

    if (nb < 2)
        return (2);
    next_to_check = nb + 1 - (nb % 2);
    while (! ft_is_prime(next_to_check))
        next_to_check += 2;
    return (next_to_check);
}