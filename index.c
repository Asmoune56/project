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

         default:

         printf("Mauvais choix ! Essayer a nouveau.\n");

    }


    }  while( choix != 6);


    return 0;
}
