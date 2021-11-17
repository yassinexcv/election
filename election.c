#include <stdio.h>
#include <string.h>
int main ()
{
	printf ("----------------Bonjoure Election Presidentielle----------------\n");
	//ELECTEUR
	int nbrElect ;
	printf("entrer le nombre d'electeur : \n");
	scanf("%d", &nbrElect);
	char elect[nbrElect][8];
	for (int i=0 ; i<nbrElect ; i++)
	{
		printf("entrer les CIN : \n");
		scanf("%s",&elect[i]);
	}
	//CONDIDATS

	int nbrCondid ;
	printf("entrer le nombres des Condidat : \n");
	scanf("%d", &nbrCondid);
	char condid[nbrCondid][20];
	for (int i=0 ; i<nbrCondid ; i++)
	{
		printf("entrer les nom du condidats : \n");
		scanf("%s",&condid[i]);
	}
	
	
	printf("la list des electeurs est : \n");
	for (int i=0 ; i<nbrElect ; i++)
	{
		printf("%d--------%s-------- \n",i,elect[i]);

	}

		printf("la list des cindidat est : \n");
	for (int i=0 ; i<nbrCondid ; i++)
	{
		printf("%d--------%s-------- \n",i,condid[i]);
	
	}
	char tour1[nbrElect][20];
	for(int i = 0; i < nbrElect; i++)
	{
		int idx;
		printf("le choix de %s est : \n",elect[i] );
		scanf("%d",&idx);
		strcpy(tour1[i], condid[idx]);
		printf(" tu as choisi %s\n", tour1[i]);
		
	}

}