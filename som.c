#include<stdio.h>
#include<stdlib.h>

float	som(float nb)
{
    if (nb <= 0)
        return 0;
    return som(nb - 1)+((nb*nb)/(nb + 1));
}
int	main(int ac,char **av)
{
    if ( ac == 2)
    printf("%f \n",som(atoi(av[1])));
    return 0;
}
