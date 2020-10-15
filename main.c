#include <stdio.h>
#include<windows.h>
#include "module.h"

main()
{
    int monnaie, rendu,stop=0;
    int tab_qb[7]={10,10,10,10,10,10,10}, tab_pm[8]={10,10,10,10,10,10,10,10};
    printf("\n");
                 /*usage des couleurs*/
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE) ;
    SetConsoleTextAttribute(console, 12);
    /*usage du couleurs*/
     printf("\n\n\n");
    printf("                                            _~~_~~__~~__~~__~~__~~__~~__~~__~~_ /(^.^)/ _~~__~~__~~__~~__~~__~~__~~__~~__~~_\n\n\n");
    SetConsoleTextAttribute(console, 9);
    printf("                                            **************************DISTRIBUTEUR DE BOISSONS********************************\n\n");

    while(!stop)
    {
        monnaie = 0 ;
        liste_monnaie(tab_pm,&monnaie);
        liste_boisson(tab_pm,tab_qb,&monnaie,&rendu);
    }




}
