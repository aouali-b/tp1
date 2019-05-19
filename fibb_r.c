#include <stdio.h>
#include <stdlib.h>

int ft_fibb(int i)
{
    if (i < 0)
        return -1;
    if (i <= 1)
        return i;
    return (ft_fibb(i - 2) + ft_fibb(i - 1));
}
int main(int ac,char **av)
{
    if (ac == 2)
    printf("%d \n",ft_fibb(atoi(av[1])));
    return 0;
}
