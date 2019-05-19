#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pile
{
    char    *data;
    struct Pile *next;
}Pile;

int     main(int ac,char **av)
{
    int i = 1;
    Pile    *l = NULL;
    Pile    *p = NULL;

    if (ac > 1)
    {
        while (i < ac)
        {
            l = (Pile *)malloc(sizeof(Pile));
            l->data = strdup(av[i++]);
            if (i == 2)
                l->next = NULL;
            else
                l->next = p;
            p = l;
        }
        while (p != NULL)
        {
            printf("%s \n",p->data);
            p = p->next;
        }
        while (l != NULL)
        {
            p = l->next;
            free(l->data);
            free(l);
            l = p;
        }
    }
}
