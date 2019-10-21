//Calcul de la variança d'un nombre n d'elements

#include<stdio.h>
#include<stdlib.h>

int main()
{
  double n; /*nombre de mostres: SEMPRE FLOAT o DOUBLE*/
  int i;
  double var, mitjana;
  double *dades; //creo un vector amb les dades, de dimensió que dirà l'usuari
  int resposta;
  
  printf("Digues el nombre d'elements dels que vols calcular la variança:\n");
  scanf("%lf", &n);
  
  dades=calloc(n,sizeof(double));
  
  if (dades==NULL)
  {
    printf("Hi ha un error");
    free(dades);
    return 1;
  }
  
  printf("Vols introduir les dades manualment? 1 si, 2 no.\n");
  scanf("%d", &resposta);
  
  if (resposta==1) {
	for (i=0; i<=(n-1); i++) //emplenem les caselles del vector
   {
    printf("Escriu el nombre %d:", i+1);
    scanf("%lf", &dades[i]);
   }
	}
  else if (resposta==2) {
	for (i=0; i<=(n-1); i++)
   {
    dades[i]=i;
   }
	}
	else {
	printf ("Has triat una opcio que no es valida");
	return 0;
	}
  
  mitjana=0;
  for (i=0; i<=(n-1); i++)
  {
    mitjana=(1./n)*(dades[i]) + mitjana; //COMPTE: si divivim enter per enter (1 entre n-1) fa la divisió entera, i p.ex, 1/2=0! Hem de posar "1."
  }
  printf("La mitjana dels nombres es: %.16f\n", mitjana);
  
  var=0;
  for (i=0; i<=(n-1); i++)
  {
    var=(1./(n-1))*((dades[i]-mitjana)*(dades[i]-mitjana)) + var;
  }
  printf("La variança dels nombres es %.16f\n", var);
  
  //Alliberem la memòria del vector dades
  free(dades);
  dades=NULL;
  
  return 0;
}