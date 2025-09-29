#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact
{
    char numtele[40];
    char email[40];
    char nom[40];
};
int main()
{
    struct Contact c[MAX];
    int choix;
    int count = 0;
    char nomdelet[20];
    char nomedite[20];
    char nomrech[20];
     int trouve =0 ;
    // menu
    while (1)
    {

        printf("========choisie un nomber ========= \n");
        printf("1. Ajouter un Contact \n2. Modifier un Contact\n3. Supprimer un Contact\n4. Afficher Tous les Contacts \n5. Rechercher un Contact\n6.Quitter\n");
        printf("votre choix : ");
        scanf("%d", &choix);
        // AJOUTER **
        if (choix == 1)

        {

            if (count > MAX)
            {
                printf("!!!!!!!!!!! Le stockage est saturer !!!!!!!!");
            }
            else
            {

                printf("======LES INFORMATION DE NUMBER======\n");
                printf("Entrer le nom de contacte :");
                scanf("%s", &c[count].nom);
                printf("Entrer le numero de telephone :");
                scanf("%s", &c[count].numtele);
                printf("Entrer le e-mail de contacte sans '@gmail.com' :");
                scanf("%s", &c[count].email);
                printf("Le contacte est enregistrer avec succee !! (^-^) \n");
                count++;
            }
        }
        // modifier**
        else if (choix == 2)
        {
            printf("Entrer le nom de contacte que vous pouver modifier :");
            scanf("%s", &nomedite);
            for (int i = 0; i < count; i++)
           
                if (strcmp(nomedite, c[i].nom) == 0)
                {
                    trouve =1;
                    printf("Entrer la nouvelle valeur : \n");
                    printf("Entrer le nouveau nom de contacte :");
                    scanf("%s", &c[i].nom);
                    printf("Entrer le nouveau numero de telephone :");
                    scanf("%s", &c[i].numtele);
                    printf("Entrer le nouveau e-mail de contacte sans '@gmail.com' :");
                    scanf("%s", &c[i].email);
                    printf("Le contacte a été modifier avec succee !! (^-^) \n");
                }else if (!trouve){
                    printf("aucun contacte \n");
                }
        }
        // Supprimer
        else if (choix == 3)
        {
            int find =0;
            printf("Entrer le nom que vous pouvez supprimer : ");
            scanf("%s", &nomdelet);
            for (int i = 0; i < count; i++)
            {
                if (strcmp(nomdelet, c[i].nom) == 0)
                {
                    find = 1;
                    for (int j = i; j < count - 1 ; j++)
                    {
                         c[j] = c[j+1];

                         count--;
                    }
                    printf("Le contacte a été supprimer (^-^)v \n");
                    break;
                }else if (!find){
                    printf("Aucun result !!\n");
                }
            }
        }
        // Afficher**
        else if (choix == 4)
        {

            printf("========TOUT LES CONTACTES=======\n");

            for (int i = 0; i < count; i++)
            {
                if (count == 0)
                {
                    printf("|AUCUN           |AUCUN              |AUCUN \n");
                }
                else
                {
                    printf("|NOM :%s   |NUMERO : %s    | EMAIL :%s @gmail.com\n", c[i].nom, c[i].numtele, c[i].email);
                }
            }
        }
        // Rechercher**
        else if (choix == 5)
        {
            printf("Recherche :");
            scanf("%s", &nomrech);
            for (int i = 0; i < count; i++)
            {
                if (strcmp(nomrech, c[i].nom) == 0)
                {
                    printf("le nom :%s  ;le numero : %s ;Email %s @gmail.com\n", c[i].nom, c[i].numtele, c[i].email);
                    break;
                }
                else if (strcmp(nomrech, c[i].nom) != 0)
                {
                    printf("AUCUN RESULTAT !!! \n");
                }
            }
        }
        // EXIT**
        else if (choix == 6)
        {
            printf("bey");
            break;
        }
        // EXEPTION**
        else
        {
            printf("Entrer un nomber parmie les choix\n");
        }
    }
}