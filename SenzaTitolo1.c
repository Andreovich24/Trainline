#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void aggiungi_prenotazione(char *user, char *partenza, char *destinazione, char *num_treno, float prezzo, int km){
	FILE *pf;
	
	if((pf=fopen("Prenotazioni.txt","a+"))==NULL){
		printf("Errore\n");
	}else{
		
		fprintf(pf, "%s %s %s %s %3.2f %d\n", user, partenza, destinazione, num_treno, prezzo, km);
		}
	
}
int main(){
	char p[20]="baricentro";
	char d[20]="castellanagrotte";
	float prezzo=3.10;
	int km=35;
	char num_treno[10]="avt1107";
	char user[20]="giuseppettt";
	printf("Ciaoo");
	aggiungi_prenotazione(user, p, d, num_treno, prezzo, km);
	system("cls");
	printf("FFFFF");
	
	
	return 0;
}
