#include <stdio.h>
#include <string.h>

typedef struct {

    int jour;
    int mois;
    int anee;
}date;
 typedef struct{

    char titre[20];
    char description[200];
    char priorite [10];
    date dt;
}tach;
// pour stokere les nouville tache

 tach table[150];
 int conteur = 0;


 void Ajouter(){

     if ( conteur >= 150){
         printf(" Aucune autre tache ne peut etre ajoutee. ");
         return;
     }

     tach nouville_tache;

     printf("_____nouville_tache_____\n");


     printf("\n entrer le titre : \n");
     scanf(" %[^\n]",nouville_tache.titre);

     printf("entrer le description : \n");
     scanf(" %[^\n]",nouville_tache.description);

     printf("entrer la pririorite (high/low) : \n");
     scanf(" %[^\n]",nouville_tache.priorite);

     printf("entrer le jour : \n");
     scanf("%d",&nouville_tache.dt.jour);

     printf("entrer le mois : \n");
     scanf("%d",&nouville_tache.dt.mois);

     printf("entrer l anee : \n");
     scanf("%d",&nouville_tache.dt.anee);

     table[conteur]= nouville_tache;
     conteur++;
 }


 void Afficher(){

     if (conteur == 0){
         printf("Il ny a aucune tache a afficher.");
         return;
     }
     printf("\nListe de choses a faire:\n");

     for (int i= 0; i< conteur;i++){

     printf(" Tache : %d\n",i + 1);
     printf(" titre : %s\n",table[i].titre);
     printf(" description : %s\n",table[i].description);
     printf(" pririorite : %s\n",table[i].priorite);

     printf("date d_echeance : %02d-%02d-%04d \n",table[i].dt.jour,table[i].dt.mois,table[i].dt.anee);
     }
 }

int main(){
    int choix;
    do {
        printf(" \n \n_____________ les taches _____________ \n");
        printf(" _1_  Ajouter.\n");
        printf(" _2_  Afficher.\n");
        printf(" _3_  ModifierTache.\n");
        printf(" _4_  supprimerTache.\n");
        printf(" _5_  FiltrerTaches.\n");
        printf(" _6_  sortie.\n");
        scanf("%d",&choix);
    switch (choix){

        case 1:
         Ajouter();
         break;
          case 2:
         Afficher();
         break;

         default:

         printf("Mauvais choix ! Essayer a nouveau.\n");

    }


    }  while( choix != 6);


    return 0;
}
