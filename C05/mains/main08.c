#include<stdlib.h>
#include<stdio.h>

int ft_ten_queens_puzzle(void);

int main(int argc, char const *argv[])
{
    int res;

    res = ft_ten_queens_puzzle();
    printf("Cantidad de soluciones mostradas: %d\n", res);
    return (0);
}
