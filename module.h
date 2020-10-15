#include<stdio.h>
#include<windows.h>
//FONCTION D'AFFICHAGE DE LISTE ET CHOIX DES PIECES DE MONNAIES
void liste_monnaie(int* tab_pm, int *monnaie)
{
    int choix,stop=0;
    while(!stop)
    {

                 /*usage des couleurs*/
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE) ;
    SetConsoleTextAttribute(console, 12);
    /*usage du couleurs*/
        /*usage des couleurs*/
    SetConsoleTextAttribute(console, 13);
    /*usage du couleurs*/
        printf("                      **   **   *****  **    **   **  **     *****      *****     **   **     ***     **    **   **    **   ******   ******  *****                      \n");
        printf("                      *** ***   **     ***   **   **  **     **   **    **        *** ***   **   **   ***   **   ***   **   **  **     **    **                         \n");
        printf("                      ** * **   *****  ** *  **   **  **     **    **   *****     ** * **   **   **   ** *  **   ** *  **   ******     **    *****                      \n");
        printf("                      ** * **   **     **  * **   ******     **   **    **        ** * **   **   **   **  * **   **  * **   **  **     **    **                         \n");
        printf("                      **   **   *****  **   ***   ******     *****      *****     **   **     ***     **   ***   **   ***   **  **   ******  *****                  \n\n");
                     /*usage des couleurs*/
    SetConsoleTextAttribute(console, 11);
    /*usage du couleurs*/
    printf("                                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                                    ~~~~~~                                                                                    ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                0 ==> 1DA."); SetConsoleTextAttribute(console, 11);                printf("                                          ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                1 ==> 2DA."); SetConsoleTextAttribute(console, 11);      printf("                                          ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                2 ==> 5DA."); SetConsoleTextAttribute(console, 11);                printf("                                          ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                3 ==> 10DA."); SetConsoleTextAttribute(console, 11);  printf("                                         ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                4 ==> 20DA.");SetConsoleTextAttribute(console, 11);           printf("                                         ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                5 ==> 50DA."); SetConsoleTextAttribute(console, 11);        printf("                                         ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                6 ==> 100DA.");  SetConsoleTextAttribute(console, 11);          printf("                                        ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                7 ==> 200DA.");  SetConsoleTextAttribute(console, 11);          printf("                                        ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                8 ==> QUITTER.");  SetConsoleTextAttribute(console, 11);          printf("                                      ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~                                                                                    ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                         /*usage des couleurs*/
    SetConsoleTextAttribute(console, 14);
    /*usage du couleurs*/
    printf("                                                              Veuillez enter votre choix s'il vous plait!\n");
    scanf("%d",&choix);
        switch (choix)
        {
            case 0 : *monnaie = *monnaie + 1;
                     tab_pm[0]++;
            break;

            case 1 : *monnaie = *monnaie + 2;
                     tab_pm[1]++;
            break;

            case 2 : *monnaie = *monnaie + 5;
                     tab_pm[2]++;
            break;

            case 3 : *monnaie = *monnaie + 10;
                     tab_pm[3]++;
            break;

            case 4 : *monnaie = *monnaie + 20;
                     tab_pm[4]++;
            break;

            case 5 : *monnaie = *monnaie + 50;
                     tab_pm[5]++;
            break;

            case 6 : *monnaie = *monnaie + 100;
                     tab_pm[6]++;
            break;

            case 7 : *monnaie = *monnaie + 200;
                     tab_pm[7]++;
            break;

            case 8 : stop = 1;
            break;
        }

    }
}

//RENDRE MONNAIE
int rendre(int *rendu,int* tab_pm)
{
     /*usage du couleurs*/
     HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE) ;
    SetConsoleTextAttribute(console, 10);
    /*usage du couleurs*/printf("VOICI VOTRE  RENDU D'ARGENT:\n");
    if(tab_pm[7] > *rendu / 200)
    {
        tab_pm[7] = tab_pm[7] - *rendu/200;
        printf(" %d piece(s) de 200 DA.\n", *rendu/200);
        *rendu = *rendu % 200;
    }

        if(tab_pm[6] >= *rendu / 100)
    {
        tab_pm[6] = tab_pm[6] - *rendu/100;
        printf(" %d piece(s) de 100 DA.\n", *rendu/100);
        *rendu = *rendu % 100;
    }

        if(tab_pm[5] >= *rendu / 50)
    {
        tab_pm[5] = tab_pm[5] - *rendu/50;
        printf(" %d piece(s) de 50 DA.\n", *rendu/50);
        *rendu = *rendu % 50;
    }

        if(tab_pm[4] >= *rendu / 20)
    {
        tab_pm[4] = tab_pm[4] - *rendu/20;
        printf(" %d piece(s) de 20 DA.\n", *rendu/20);
        *rendu = *rendu % 20;

    }

        if(tab_pm[3] >= *rendu / 10)
    {
        tab_pm[3] = tab_pm[3] - *rendu/10;
        printf(" %d piece(s) de 10 DA.\n", *rendu/10);
        *rendu = *rendu % 10;
    }

        if(tab_pm[2] >= *rendu / 5)
    {
        tab_pm[2] = tab_pm[2] - *rendu/5;
        printf(" %d piece(s) de 5 DA.\n", *rendu/5);
        *rendu = *rendu % 5;
    }

        if(tab_pm[1] >= *rendu / 2)
    {
        tab_pm[1] = tab_pm[1] - *rendu/2;
        printf(" %d piece(s) de 2 DA.\n", *rendu/2);
        *rendu = *rendu % 2;
    }

        if(tab_pm[0] >= *rendu / 1)
    {
        tab_pm[0] = tab_pm[0] - *rendu/1;
        printf(" %d piece(s) de 1 DA.\n", *rendu/1);
        *rendu = *rendu % 2;
    }

}

//FONCTION D'AFFICHAGE DE LISTE ET CHOIX DES BOISSONS
void liste_boisson(int* tab_pm,int* tab_qb,int *monnaie,int *rendu)
{
    int choix,prix;
                 /*usage des couleurs*/
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE) ;
    SetConsoleTextAttribute(console, 12);
    /*usage du couleurs*/
        /*usage des couleurs*/
    SetConsoleTextAttribute(console, 13);
    /*usage du couleurs*/
        printf("                     **   **   *****  **    **   **  **     *****      *****     ******      ***     ******   ******   ******     ***     **    **     \n");
        printf("                     *** ***   **     ***   **   **  **     **   **    **        **   **   **   **     **     **       **       **   **   ***   **     \n");
        printf("                     ** * **   *****  ** *  **   **  **     **    **   *****     ******    **   **     **     ******   ******   **   **   ** *  **     \n");
        printf("                     ** * **   **     **  * **   ******     **   **    ***       **   **   **   **     **         **       **   **   **   **  * **     \n");
        printf("                     **   **   *****  **   ***   ******     *****      *****     ******      ***     ******   ******   ******     ***     **   ***   \n\n");
                     /*usage des couleurs*/
    SetConsoleTextAttribute(console, 11);
    /*usage du couleurs*/
    printf("                                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                                    ~~~~~~                                                                                    ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                0 ==> EAU (20DA)."); SetConsoleTextAttribute(console, 11);                printf("                                   ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                1 ==> LAIT (15DA)."); SetConsoleTextAttribute(console, 11);      printf("                                  ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                2 ==> CAFEE (30DA)."); SetConsoleTextAttribute(console, 11);                printf("                                 ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                3 ==> THE CITRON (40DA)."); SetConsoleTextAttribute(console, 11);  printf("                            ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                4 ==> JUS (25DA).");SetConsoleTextAttribute(console, 11);           printf("                                   ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                5 ==> SODA (50DA)."); SetConsoleTextAttribute(console, 11);        printf("                                  ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                6 ==> CHOCOLAT (35DA).");  SetConsoleTextAttribute(console, 11);          printf("                              ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~"); SetConsoleTextAttribute(console, 15); printf("                                7 ==> RENDRE MOI MON MONNAIE.");  SetConsoleTextAttribute(console, 11);          printf("                       ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~                                                                                    ~~~~~~\n");  SetConsoleTextAttribute(console, 11);
    printf("                                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                         /*usage des couleurs*/
    SetConsoleTextAttribute(console, 14);
    /*usage du couleurs*/
    printf("                                                              Veuillez enter votre choix s'il vous plait!\n");
    scanf("%d",&choix);
        switch (choix)
        {
            case 0 : prix = 20;
            break;

            case 1 : prix = 15;
            break;

            case 2 : prix = 30;
            break;

            case 3 : prix = 40;
            break;

            case 4 : prix = 25;
            break;

            case 5 : prix = 50;
            break;

            case 6 : prix = 35;
            break;

            case 7 : rendre(monnaie,tab_pm);
            break;
            SetConsoleTextAttribute(console, 10);
        }
        if(choix == 7)
        {
            printf("VOTRE MONNAIE EST RENDU, MERCI!\n");
        }
        else
        {
            if(tab_qb[choix] == 0)
            {
                printf("DESOLE!LA QUANTITE DU BOISSON DE VOTRE CHOIX EST FINIE,VOICI VOTRE ARGENT.\n");
                rendre(monnaie,tab_pm);
            }
            else
            {
                if(*monnaie == prix)
                {
                    tab_qb[choix] = tab_qb[choix]-1;
                    printf("MERCI POUR VOTRE CHOIX VEUILLEZ PRENEZ VOTRE BOISSON.\n");
                }
                else if(*monnaie < prix)
                {
                    printf("VOTRE ARGENT N'EST PAS SUFFISANT,VEUILLEZ REESSAYER UNE AUTRE FOIS,MERCI\n");
                    rendre(monnaie,tab_pm);
                }
                else
                {
                    *rendu = *monnaie-prix;
                    rendre(rendu,tab_pm);
                    if (*rendu != 0 )
                    {
                        printf("DESOLE! IL N'Y A PAS DE MONAIE SUFFISANT DANS LE DISTRIBUTEUR, PRENEZ VOTRE ARGENT.\n");
                        rendre(monnaie,tab_pm);
                    }
                    else
                    {
                        printf("MERCI POUR VOTRE CHOIX VEUILLEZ PRENEZ VOTRE BOISSON.\n");
                    }

                }


            }
        }

}
