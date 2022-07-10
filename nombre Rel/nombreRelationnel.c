#include <stdio.h>

typedef struct NombreRelationnel{
    int numerateur;
    int denominateur;
}NombreRelationnel;

NombreRelationnel saisie();
void afficher(NombreRelationnel nbrRel);
NombreRelationnel additon(NombreRelationnel nbrRel1, NombreRelationnel nbrRel2);
NombreRelationnel multiplication(NombreRelationnel nbrRel1, NombreRelationnel nbrRel2);
NombreRelationnel division(NombreRelationnel nbrRel1, NombreRelationnel nbrRel2);
int comparaison(NombreRelationnel nbrRel1, NombreRelationnel nbrRel2);

int main()
{
    NombreRelationnel rel1, rel2, somme, produit, reste;
    int comp;
    rel1 = saisie();
    rel2 = saisie();

    somme = additon(rel1,rel2);
    produit = multiplication(rel1,rel2); 
    reste = division(rel1,rel2);

    afficher(somme);
    afficher(produit);
    afficher(reste);

    printf("%d\n", comparaison(rel1,rel2));

    return 0;
}

NombreRelationnel saisie(){
    NombreRelationnel nbrRel;
    printf ("Entrez deux nombre le numerateur et le denominateur\n");
    scanf("%d", &nbrRel.numerateur);
    scanf("%d", &nbrRel.denominateur);
    return nbrRel;
}

void afficher(NombreRelationnel nbrRel){
    printf ("voici le nombre relationnel %d/%d\n", nbrRel.numerateur, nbrRel.denominateur);
}

NombreRelationnel additon(NombreRelationnel nbrRel1, NombreRelationnel nbrRel2){
    NombreRelationnel nbrRel;
    nbrRel.numerateur = nbrRel1.numerateur * nbrRel2.denominateur + nbrRel2.numerateur * nbrRel1.denominateur ;
    nbrRel.denominateur = nbrRel1.numerateur * nbrRel2.denominateur;
    return nbrRel;
}

NombreRelationnel multiplication(NombreRelationnel nbrRel1, NombreRelationnel nbrRel2){
    NombreRelationnel nbrRel;
    nbrRel.numerateur = nbrRel1.numerateur * nbrRel2.numerateur;
    nbrRel.denominateur = nbrRel1.denominateur * nbrRel2.denominateur;
    return nbrRel;
}

NombreRelationnel division(NombreRelationnel nbrRel1, NombreRelationnel nbrRel2){
    NombreRelationnel nbrRel;
    nbrRel.numerateur = nbrRel1.numerateur * nbrRel2.denominateur;
    nbrRel.denominateur = nbrRel1.denominateur * nbrRel2.numerateur;
    return nbrRel;
}

int comparaison(NombreRelationnel nbrRel1, NombreRelationnel nbrRel2){
    if (nbrRel1.numerateur == nbrRel2.numerateur && nbrRel1.denominateur == nbrRel2.denominateur)
    {
        return 1;
    }else return 0;
}