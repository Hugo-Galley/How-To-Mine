
#include "minage_coins.h"

void choix_pool()
{
    printf("Sur quelle pool Voulez vous Miner ?\n");
    printf("1.2Miners\n");
    printf("2.Cruxpool\n");
    printf("3.Nanopool\n");
}
void choix_pool_btc()
{
    int pool=0;
    choix_pool();
        scanf("%d",&pool);
        switch(pool)
         {
         case 1 :
             {
                 printf("\n\n Vous etes actuelement sur la pool : 2Miners \n\n \n ");
                   minage_btc();
                   break;
             }
         case 2 :
            {
                printf("\n\n Vous etes actuelement sur la pool : Cruxpool \n\n \n ");
                   minage_btc();
                   break;
            }
         case 3 :
            {
                printf("\n\n Vous etes actuelement sur la pool : Nanopool \n\n \n ");
                   minage_btc();
                   break;
            }
         default :
            {
                printf("Desolee cette pool n est pas prise en charge . ");
                   printf("\n\nVoulez vous miner autre chose (1/oui 0/non)");

                break;
            }

         }
         return 0;
}

void choix_pool_ether()
{
   int  pool=0;
     choix_pool();
        scanf("%d",&pool);
        switch(pool)
         {
         case 1 :
             {
                 printf("\n\n Vous etes actuelement sur la pool : 2Miners \n\n \n ");
                   minage_ether();
                   break;
             }
         case 2 :
            {
                printf("\n\n Vous etes actuelement sur la pool : Cruxpool \n\n \n ");
                   minage_ether();
                   break;
            }
         case 3 :
            {
                printf("\n\n Vous etes actuelement sur la pool : Nanopool \n\n \n ");
                   minage_ether();
                   break;
            }
         default :
            {
                printf("Desolee cette pool n est pas prise en charge . ");
                break;
            }

         }
         return 0;
}

void choix_pool_doge()
{
    int pool=0;
    choix_pool();
        scanf("%d",&pool);
        switch(pool)
         {
         case 1 :
             {
                 printf("\n\n Vous etes actuelement sur la pool : 2Miners \n\n \n ");
                   minage_doge();
                   break;
             }
         case 2 :
            {
                printf("\n\n Vous etes actuelement sur la pool : Cruxpool \n\n \n ");
                   minage_doge();
                   break;
            }
         case 3 :
            {
                printf("\n\n Vous etes actuelement sur la pool : Nanopool \n\n \n ");
                   minage_doge();
                   break;
            }
         default :
            {
                printf("Desolee cette pool n est pas prise en charge . ");
                break;
            }

         }
         return 0;

}

void choix_pool_rvn ()
{
    int pool=0;
     choix_pool();
        scanf("%d",&pool);
        switch(pool)
         {
         case 1 :
             {
                 printf("\n\n Vous etes actuelement sur la pool : 2Miners \n\n \n ");
                   minage_rvn();
                   break;
             }
         case 2 :
            {
                printf("\n\n Vous etes actuelement sur la pool : Cruxpool \n\n \n ");
                   minage_rvn();
                   break;
            }
         case 3 :
            {
                printf("\n\n Vous etes actuelement sur la pool : Nanopool \n\n \n ");
                   minage_rvn();
                   break;
            }
         default :
            {
                printf("Desolee cette pool n est pas prise en charge . ");
                break;
            }

         }
         return 0;
}
void choix_pool_zel ()
{
    int pool=0;
    choix_pool();
        scanf("%d",&pool);
        switch(pool)
         {
         case 1 :
             {
                 printf("\n\n Vous etes actuelement sur la pool : 2Miners \n\n \n ");
                   minage_zel();
                   break;
             }
         case 2 :
            {
                printf("\n\n Vous etes actuelement sur la pool : Cruxpool \n\n \n ");
                   minage_zel();
                   break;
            }
         case 3 :
            {
                printf("\n\n Vous etes actuelement sur la pool : Nanopool \n\n \n ");
                   minage_zel();
                   break;
            }
         default :
            {
                printf("Desolee cette pool n est pas prise en charge . ");
                   printf("\n\nVoulez vous miner autre chose (1/oui 0/non)");

                break;
            }

         }
         return 0;
}
