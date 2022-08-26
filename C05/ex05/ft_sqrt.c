int ft_sqrt(int nb)
{
    int i;

    if (nb < 1)
        return (0);
    i = 1;
    while ((i * i) < nb)
        i++;
    if ((i * i) == nb)
        return (i);
    return (0);    
}