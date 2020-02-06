#include <stdio.h>
#include <string.h>

char destination[10];
int choix = 1;

int main() {


printf ("Ou voulez vous aller ? paradis ou enfer\n");
while ( (strcmp( destination,"paradis")<0 && strcmp( destination,"paradis")>0 && strcmp( destination,"enfer")<0 && strcmp(destination,"enfer")>0 || choix==1)) {
scanf ("%s",&destination);
	
	if ( strcmp( destination,"enfer")==0 ){
	printf ("Vous etes arrives en enfer allez vous faire\n");
	choix = 0;
		}

	if (strcmp( destination,"paradis")==0 ){
	printf ("Vous etes arrives au paradis");
	choix = 0;
		}
	else  { 
		printf ("Veuillez choisir une destination valide\n");

	
		}
		
}


return 0;
}