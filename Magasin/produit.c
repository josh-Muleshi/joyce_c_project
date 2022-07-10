#include <stdio.h>

typedef struct Produit{
    int id;
    double prix;
    double qte;
}Produit;

Produit saisie();
void afficher(Produit prod);
void commande();

int main(){

    /*Produit prod, carte_mere, processeur, ram, carte_graphique;
    carte_mere = saisie();
    processeur = saisie();
    ram = saisie();
    carte_graphique = saisie();

    afficher(carte_mere);
    afficher(processeur);
    afficher(ram);
    afficher(carte_graphique);*/

    commande();
    return 0;
}

Produit saisie(){
    Produit prod;
    printf ("Entrez le code, prix et la quantite du produit\n");
    scanf("%d", &prod.id);
    scanf("%lf", &prod.prix);
    scanf("%lf", &prod.qte);
    return prod;
}

void afficher(Produit prod){
    printf ("Produit code : %d , prix : %lf , qte : %lf\n", prod.id, prod.prix, prod.qte);
}

void commande(){
    Produit prod;
    afficher(saisie(prod));
}