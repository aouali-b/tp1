#include <stdio.h>
#include <stdlib.h>
int it_fibb(int nb)
{
    int r;
    int i;
    int n;
    n = 1;
    i = 0;
    if (nb < 0)
        return -1;
    if (nb == 0 || nb == 1)
        return nb;
    while(nb--)
    {
        r = i + n;
        i = n;
        n = r;
    }
    return i;
}
int main(int ac,char **av)
{
    if (ac == 2)
        printf("%d \n",it_fibb(atoi(av[1])));
    return 0;
}
