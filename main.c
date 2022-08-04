#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int b,sucre,lait;
    char choix[50];
    float prix;

    do{
    printf("Choisir votre choix:\n");
    printf("1 = Cafe\n");
    printf("2 = The\n");
    printf("3 = Chocolat\n");
    printf("4 = Soda\n");
    scanf("%d", &b);
    if (b==1){
        prix=2;
        strcpy(choix, "cafe");
        printf("voulez vous du sucre?\n");
        scanf("%d", &sucre);

        if(sucre==1){
            strcat(choix, " est non sucre");
        }
        else if (sucre==2){
            prix += 0.25;
            strcat(choix," est sucre");
        }
            else {
                prix += 0.5;
            strcat(choix, " est tres sucre");
            }
        printf("voulez vous du lait? 0=sans lait \n");
        scanf("%d", &lait);

        if (lait==1){
            strcat(choix," sans lait");
        }
        else{
            prix += 1;
            strcat(choix," avec lait");
        }
    }
    else if (b==2){
        prix=2;
        strcpy(choix, "cafe");
        printf("voulez vous du sucre?\n");
        scanf("%d", &sucre);

        if(sucre==1){
            strcat(choix, " est non sucre");
        }
        else if (sucre==2){
            prix += 0.25;
            strcat(choix," est sucre");
        }
            else {
                prix += 0.5;
            strcat(choix, " est tres sucre");
            }
        printf("voulez vous du lait? 1=sans lait \n");
        scanf("%d", &lait);

        if (lait==1){
            strcat(choix," sans lait");
        }
        else{
            prix += 1;
            strcat(choix," avec lait");
        }
    }
    else if (b==3){
        prix=2;
        strcpy(choix, "cafe");
        printf("voulez vous du sucre?\n");
        scanf("%d", &sucre);

        if(sucre==1){
            strcat(choix, " est non sucre");
        }
        else if (sucre==2){
            prix += 0.25;
            strcat(choix," est sucre");
        }
            else {
                prix += 0.5;
            strcat(choix, " est tres sucre");
            }
        printf("voulez vous du lait? 1=sans lait \n");
        scanf("%d", &lait);

        if (lait==1){
            strcat(choix," sans lait");
        }
        else{
            prix += 1;
            strcat(choix," avec lait");
        }
    }
    else if (b==4){
        prix=3;
        strcpy(choix, "soda");
    }
    }while (b<0 || b>5);
    printf("le prix a paye est: %f \n", prix);
    printf("votre %s", choix, " est pret");
    return 0;
}
