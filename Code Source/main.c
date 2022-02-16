#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "menu_demarage.h"
#include "identite.h"
#include "prerequis.h"
#include "menu debut.h"
#include"info_miniere.h"

int main(int argc, char *argv[])
{
   int retour=0;
   int avis=0;
   int menu=0;

do
{
menu_debut();
do
{

    scanf("%d",&menu);
    switch(menu)
    {
    case 1 :
        {

            minage();

            scanf("%d",&avis);
            break;
        }
    case 2 :
        {
          prerequis();
          scanf("%d",&retour);

          break;
        }
    case 3 :
        {
            info_minier();

            break;
        }
    default :
        {
            printf("Desolee mais ce que vous avez enterer n est pas pris en compte \n\n ");
            break;
        }

    }
} while(retour!=0);

printf("\n Voulez Vous arreter (1/oui 0/non)");
scanf("%d",&avis);
} while(avis!=1);
return 0;
}


