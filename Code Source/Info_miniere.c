
#include "info_miniere.h"
#include "identite.h"
#include"Site_pool.h"
void info_minier()
{
 info_miniere stat;
 stat.nombre_de_hash=52;
 stat.pourcentage_pool=1;
 stat.balance=0,0001;
 stat.nbr_GPU=1;
 identite_ETC ok;
 ok.nom;
 ok.adresse;



 printf("\n\n Voici vos statistiques : \n");
 site_pool();
 printf(" L application prend %d pourcent de votre minage (1 pourcent pour la pool) ainsi que 0.25 pourcent sur le DOG du au paraignage .\n ",stat.pourcentage_pool);
 printf("Merci cela aide l'application a se remunerer . \n\n");





}
