#include <stdio.h>
#include <string.h>

char destination[10];
int choix = 1;

struct Lieux {
	char nom[10];
	char description[20];
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

int main() {


lieu lieu1 ={"enfer", "il fait chaud\n" , 19 , {1,2}};
lieu lieu2 ={"paradis", "c'est plutot cool\n" , 3 , {1,2}};
lieu lieu3 ={"terre", "bien et pas bien\n" , 10 , {1,2}};
deplacement(lieu1,lieu2,lieu3);



return 0;
}