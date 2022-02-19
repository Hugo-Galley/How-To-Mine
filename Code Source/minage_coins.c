
#include"identite.h"
#include <stdlib.h>
#include <stdio.h>

   identite_ETC info;
   identite_ether infoETH;
   identite_dog infoDOG;
   identite_rvn infoRVN;
   identite_zel infoZEL;
   identite_grin infoGrin;
   identite_beam infoBeam;

void minage_btc()
{
     printf("Veuilez entrer le nom de machine(veuillez utiliser _ pour les espaces)\n");
        scanf("%s",&info.nom);
        printf("Veuillez entrer votre adresse de reception\n");
        scanf("%s",&info.adresse);

         FILE*fichier=NULL;

        fichier=fopen("../Minage/gminer_2_78_windows64/start_miner_etc.bat","w+");

        if(fichier!=NULL);
        {
            fprintf(fichier,"REM\nREM Example bat file for starting PhoenixMiner.exe to mine ETH\nREM\nsetx GPU_FORCE_64BIT_PTR 0\nsetx GPU_MAX_HEAP_SIZE 100\nsetx GPU_USE_SYNC_OBJECTS 1\nsetx GPU_MAX_ALLOC_PERCENT 100\nsetx GPU_SINGLE_ALLOC_PERCENT 100\nREM IMPORTANT: Replace the ETH address with your own ETH wallet address in the -wal option (Rig001 is the name of the rig)\nPhoenixMiner.exe -pool eth.2miners.com:2020  -wal %s.%s\npause",info.adresse,info.nom);
            fclose(fichier);
        }



        printf("\n Rendez vous sur le raccourcie Minage ETC est double cliquee dessus pour lancee le minage  \n",info.nom,info.adresse);
        printf("\n Le virement sera automatiquement verser a cette adresse des que le montant minimum requis sera atteint \n\n");
        printf("Appuyez sur 1 pour continuer ");
        return 0;
}
void minage_ether()
{
     printf("Veuilez entrer le nom de machine(veuillez utiliser _ pour les espaces)\n");
        scanf("%s",&infoETH.nom);
        printf("Veuillez entrer votre adresse de reception\n");
        scanf("%s",&infoETH.adresse);

           FILE*fichier3=NULL;

        fichier3=fopen("../Minage/gminer_2_78_windows64/Minage ETH.bat","w+");

        if(fichier3!=NULL);
        {
              fprintf(fichier3,"REM\nREM Example bat file for starting PhoenixMiner.exe to mine ETH\nREM\nsetx GPU_FORCE_64BIT_PTR 0\nsetx GPU_MAX_HEAP_SIZE 100\nsetx GPU_USE_SYNC_OBJECTS 1\nsetx GPU_MAX_ALLOC_PERCENT 100\nsetx GPU_SINGLE_ALLOC_PERCENT 100\nREM IMPORTANT: Replace the ETH address with your own ETH wallet address in the -wal option (Rig001 is the name of the rig)\nPhoenixMiner.exe -pool eth.2miners.com:2020  -wal %s.%s\npause",infoETH.adresse,infoETH.nom);

              fclose(fichier3);
        }
        printf("\n Rendez vous sur le raccourcie Minage ETH est double cliquee dessus pour lancee le minage  \n",infoETH.nom,infoETH.adresse);
        printf("\n Le virement sera automatiquement verser a cette adresse des que le montant minimum requis sera atteint \n\n ");
       printf("Appuyez sur 1 pour continuer ");
       return 0;
}
void minage_doge()
{

         printf("Veuilez entrer le nom de machine(veuillez utiliser _ pour les espaces)\n");
        scanf("%s",&infoDOG.nom);
        printf("Veuillez entrer votre adresse de reception\n");
        scanf("%s",&infoDOG.adresse);

        FILE*fichier2=NULL;

        fichier2=fopen("../Minage/gminer_2_78_windows64/START.bat","w+");

        if(fichier2!=NULL);
        {
            fprintf(fichier2,"REM\nREM Example bat file for starting PhoenixMiner.exe to mine ETH\nREM\nsetx GPU_FORCE_64BIT_PTR 0\nsetx GPU_MAX_HEAP_SIZE 100\nsetx GPU_USE_SYNC_OBJECTS 1\nsetx GPU_MAX_ALLOC_PERCENT 100\nsetx GPU_SINGLE_ALLOC_PERCENT 100\nREM IMPORTANT: Replace DOGECOIN with your own DOGE wallet address after DOGE: And before the . (Worker1 is the name of the miner)\nPhoenixMiner.exe -pool ethash.unmineable.com:3333 -wal DOGE:%s.%s#8j79-n2tv -pass x\npause",infoDOG.adresse,infoDOG.nom);

            fclose(fichier2);
        }
        printf("\n Rendez vous sur le raccourcie Minage DOG est double cliquee dessus pour lancee le minage  \n",infoDOG.nom,infoDOG.adresse);
        printf("\n Le virement sera automatiquement verser a cette adresse des que le montant minimum requis sera atteint \n\n ");
        printf("Appuyer sur 1 pour continuer");
        return 0;
}
void minage_rvn()
{

        printf("Veuillez entrer votre adresse de reception\n");
        scanf("%s",&infoRVN.adresse);

           FILE*fichier4=NULL;

        fichier4=fopen("../Minage/gminer_2_78_windows64/mine_ravencoin.bat","w+");

        if(fichier4!=NULL);
        {
              fprintf(fichier4,"miner.exe --algo kawpow --server rvn.2miners.com:6060 --user %s\npause",infoRVN.adresse);
              fclose(fichier4);
        }

        printf("\n Rendez vous sur le raccourcie Minage RVN est double cliquee dessus pour lancee le minage \n",infoRVN.nom,infoRVN.adresse);
        printf("\n Le virement sera automatiquement verser a cette adresse des que le montant minimum requis sera atteint \n\n");
        printf("Appuyez sur 1 pour continuer)");
}
void minage_zel()
{
    printf("Veuillez entrer votre adresse de reception\n");
        scanf("%s",&infoZEL.adresse);
    FILE*fichier4=NULL;

        fichier4=fopen("../Minage/gminer_2_78_windows64/mine_zelcash.bat","w+");

        if(fichier4!=NULL);
        {
              fprintf(fichier4,"miner.exe --algo 125_4 --server zel.2miners.com:9090 --user %s --pass x\npause",infoZEL.adresse);
              fclose(fichier4);
        }

        printf("\n Rendez vous sur le raccourcie Minage ZEL est double cliquee dessus pour lancee le minage \n",infoZEL.nom,infoZEL.adresse);
        printf("\n Le virement sera automatiquement verser a cette adresse des que le montant minimum requis sera atteint \n\n");
        printf("Appuyez sur 1 pour continuer)");
}
