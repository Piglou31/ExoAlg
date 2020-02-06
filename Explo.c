#include <stdio.h>
#include <string.h>

char destination[10];
int choix = 1;

struct Lieux {
	char nom[10];
	char description[50];
	int difficulte;
	int id[20];
};	

typedef struct Lieux lieu;	


int deplacement(lieu lieu1,lieu lieu2,lieu lieu3) {
	printf ("Ou voulez vous aller ? paradis enfer ou terre ?\n");
	while ( (strcmp( destination,"paradis")<0 && strcmp( destination,"paradis")>0 && strcmp( destination,"enfer")<0 && strcmp(destination,"enfer")>0 || choix==1)) {
	scanf ("%s",&destination);
	
		if ( strcmp( destination,"enfer")==0 ){
		printf ("%s", lieu1.description);
		printf ("Vous etes arrives en enfer allez vous faire\n");
		printf ("voulez vous aller au styx (1) ou dans le tartare (2) ?\n");
		scanf ("%d",lieu1.id);
		choix = 0;
			}
			
		else if (strcmp( destination,"paradis")==0 ){
		printf ("%s", lieu2.description);
		printf ("Vous etes arrives au paradis\n");
		printf ("voulez vous aller au Pantheon (1) ou sur un Nuage (2) ?\n");
		scanf ("%d",lieu1.id);
		choix = 0;
			}
		
		else if (strcmp( destination,"terre")==0 ){
		printf ("%s", lieu3.description);
		printf ("Vous etes arrives sur terre\n");
		printf ("voulez vous aller a Toulouse (1) ou a Renne (2) ?\n");
		scanf ("%d",lieu1.id);
		choix = 0;
			}	
		
		else if (strcmp( destination,"paradis")>0 || (strcmp( destination,"paradis")<0 ) ) { 
			printf ("Veuillez choisir une destination valide\n");
			}
		
	}
};


int deplacement (choix){
	
		printf ("%s", lieux[choix].description);
		printf ("Vous etes arrives a/au %s\n",lieux.nom);
		printf ("voulez vous aller au %s ou au %s ?\n",lieux.id);
		scanf ("%d",lieu[choix].id);
		choix = 0;



int main() {
	
}




lieu lieux [10] = {"enfer", "il fait chaud\n" , 19 , {6,7},
"paradis", "c'est plutot cool\n" , 3 , {4,5},
"terre", "bien et pas bien\n" , 10 , {8,9},
"styx","c'est mouillé\n",17,{1,2},
"tartare","il fait encore plus chaud\n",16,{1,1},
"Pantheon","c'est beau\n",5,{1,5},
"Nuage","c'est haut\n",4,{1,8},
"Toulouse","c'est rose\n",9,{1,9},
"Renne","c'est rigolo\n",1,{1,4}};


deplacement(lieux);



return 0;
}