/*******************************************************************************
* Projekt: ProgrammierenInC
* Dateiname: main.c
* Beschreibung: Steckbrief des Users
* Autor: Magnus Kohberg
* Matr.-Nr.: 937162
* Erstellt: 09.12.2020
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


char vn[8],nn[8];
float s;
int tt,mm,jjjj;
int main(void) {



    printf("Bitte geben Sie ihren Vornamen ein\n");
    scanf("%8c",&vn);
    printf("Bitte geben Sie ihren Nachnamen ein\n");
	scanf("%8c",&nn);
	printf("Bitte geben Sie ihr Geburtsdatum im Format tt.mm.jjjj ein\n");
	scanf("%d.%d.%d",&tt,&mm,&jjjj);
	printf("Bitte geben Sie ihren Steuersatz ein\n");
	scanf("%f", &s);
    printf("Vorname:%1c \n",vn);
    printf("Nachname:%c \n",nn);
    printf("Geburtsdatum: %d.%d.%d \n", tt,mm,jjjj);
    printf("Steuersatz: %f \n",s);

    return 0;
}

