//Calcul de la variança d'un nombre n d'elements

#include<stdio.h>
#include<stdlib.h>

int main()
{
  float n; /*nombre de mostres*/
  int i;
  float var, mitjana;
  float *dades; //creo un vector amb les dades, de dimensió que dirà l'usuari
  
  printf("Digues el nombre d'elements dels que vols calcular la variança:\n");
  scanf("%f", &n);
  
  //dades=(float*)malloc(n*sizeof(float)); //reservo memòria pel vector
  dades=calloc(n,sizeof(float));
  
  if (dades==NULL)
  {
    printf("Hi ha un error");
    free(dades);
    return 1;
  }
  
    int resposta;
 
  printf("Vols introduir els valors manualment?\n 1-Si \n 2-No\n");
  scanf("%d",&resposta);
  
  if(resposta==1)
  {
    
    for(i=0;i<n;i++)
    {
      printf("Introdueix el valor %d de les dades:",i+1);
      scanf("%f",&dades[i]);
    }
	}
   else if (resposta==2)
   {
   for (i=0; i<=(n-1); i++) //emplenem les caselles del vector
  {
    dades[i]=i;
  }
  }
  else { printf("Error"); return 0; }
  
  mitjana=0;
  for (i=0; i<=(n-1); i++)
  {
    mitjana=(1./n)*(dades[i]) + mitjana; //COMPTE: si divivim enter per enter (1 entre n-1) fa la divisió entera, i p.ex, 1/2=0! Hem de posar "1."
  }
  printf("La mitjana dels nombres es: %f\n", mitjana);
  
  var=0;
  for (i=0; i<=(n-1); i++)
  {
    var=(1./(n-1))*((dades[i]-mitjana)*(dades[i]-mitjana)) + var;
  }
  printf("La variança dels nombres es %f\n", var);
  
  //Alliberem la memòria del vector dades
  free(dades);
  dades=NULL;
  
  return 0;
}