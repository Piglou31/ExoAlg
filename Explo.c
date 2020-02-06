#include <stdio.h>
#include <string.h>

char destination[10];


int main() {


printf ("Ou voulez vous aller ? paradis ou enfer\n");
scanf ("%s",&destination);

	if ( strcmp( destination,"enfer")==0 ){
	
	printf ("Vous etes arrives en enfer allez vous faire\n");
		}

	if (strcmp( destination,"paradis")==0 ){
	printf ("Vous etes arrives au paradis");
	
		}
	else if (strcmp( destination,"paradis")<0 || strcmp( destination,"paradis")<0 ||strcmp( destination,"enfer")<0 || strcmp(destination,"enfer")>0){ 
		printf ("Ou voulez vous aller ? paradis ou enfer\n");
		scanf ("%s",&destination);
		}



return 0;
}