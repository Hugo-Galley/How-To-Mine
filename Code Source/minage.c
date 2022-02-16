
#include"identite.h"
#include"choic_pool.h"
#include"minage_coins.h"
#include "pool.h"

 void minage()
 {

identite_ETC info;
identite_ether infoETH;
identite_dog infoDOG;
identite_rvn infoRVN;

   menu_demarage();

   int choix = 0;
   int pool=0;
   scanf("%d",&choix);

   switch(choix)
   {

   case 1 :
    {
       choix_pool_btc();
         break;
       }

   case 2 :
    {
       choix_pool_ether();
        break;
    }

   case 3 :
    {
        choix_pool_doge();
        break;
    }

   case 4 :
    {
         choix_pool_rvn ();
        break;
    }

   default :
    {
        printf("Desolee mais cette crypto monnaie n'est pas prise en charge . Merci de vous referez au tableau du menu demarer");
        printf("\n\nVoulez vous miner autre chose (1/oui 0/non)");
        break;
    }
   }
return 0;
 }
