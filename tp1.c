#include <stdio.h>
#include <stdlib.h>

//1
typedef  struct Cellule 
    {
        float data;
        struct Cellule* next;
    }TypeCellule;
// 2
TypeCellule* SaisieListeEnvers()
{
    TypeCellule* premier;
	TypeCellule* Liste;
	premier = NULL;
	char c;
	float nb;
	printf("voulez-vous entrer une liste non vide \n");
	scanf(" %c",&c);
	while(c == 'o' || c =='O'){
	Liste = (TypeCellule*)malloc(sizeof(TypeCellule));
			printf("entrer une donnee \n");
			scanf("%f",&nb);
			Liste->data=nb;
			Liste->next=premier;
			premier=Liste;
			printf("Voulez-vous continuer tappez o \n");
			scanf(" %c",&c);
	}
	return premier;
}
// 3
void Affichage(TypeCellule* L)
{
    while(L != 0)
    {
    printf("%f \t",L->data);
    L = L->next;
    }
    printf("\n");
}
// 4
void Liberation_memoire(TypeCellule**pL)
{
    TypeCellule *Supp;
	while(*pL != NULL)
    {
		Supp = *pL;
		*pL = (*pL)->next;
		free(Supp);
    }
    *pL = NULL;
}
// 5
int main()
{
    TypeCellule* C;
    C = SaisieListeEnvers();
    Affichage(C);
    Liberation_memoire(&C);
    return 0;
}
