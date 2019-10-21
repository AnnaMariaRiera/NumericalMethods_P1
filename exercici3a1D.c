#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n; //Variable entera, és el número de valors dels quals calcularem la variança.
  double *dades; //Aquest vector de variables amb precisió doble representa els valors dels quals volem calcular la variança.
  printf("Introdueix el numero de dades que tenim:\n");
  scanf("%d",&n);
  dades=(double*)malloc(n*sizeof(double));
  
  if(dades==NULL)
  {
    printf("Hi ha error");
    free(dades);
    return 1;
  }
  
    int resposta; //Considerem una variable entera 'resposta' que ens servirà per determinar si l'usuari vol introduir les dades manualment o no (associant cada opció a una resposta, i qualsevol altra resposta a un error).
  int i; //Variable entera utilitzada en el bucle for.
  printf("Vols introduir els valors manualment?\n 1-Si \n 2-No\n");
  scanf("%d",&resposta);
  
  if(resposta==1)
  {
    
    for(i=0;i<n;i++) //Amb aquest bucle for demanem a l'usuari el valor de cada component del vector de valors dels que calcularem la variança.
    {
      printf("Introdueix el valor %d de les dades:",i+1);
      scanf("%lf",&dades[i]);
    }
	}
   else if (resposta==2)
   {
   for (i=0; i<=(n-1); i++) //Emplenem les caselles del vector, assumint que si l'usuari no vol fer-ho manualment assignarem a la component i el valor i.
  {
    dades[i]=i;
  }
  }
  else { printf("Error"); return 0; }
    int j; //Variable entera utilitzada en el bucle for.
    double sum,s2,s; //'sum' és la suma dels valors, ens retornarà un valor amb precisió doble; 's2' és la suma dels valors al quadrat dividit entre el nombre de valors menys 1, i ens retornarà un valor amb precisió doble; i 's' és la variança, que ens retornarà un valor amb precisió doble.
    sum=0; //inicialitzem 'sum' a 0.
    s2=0; // inicialitzem 's2' a 0.
    for(j=0;j<n;j++)
    {
      
      sum=sum+dades[j];
      s2=s2+(1./(n-1))*(dades[j]*dades[j]);
    }
    s=s2-(1./(n*(n-1)))*sum*sum; //A partir dels valors calculats de 'sum' i 's2' apliquem la fórmula i calculem la vairnça 's', que com hem dit ens retornarà un valor amb precisió doble.
     printf("La variança es: %.16f\n",s); //Ens imprimeix el resultat final de la variança amb 16 xifres decimals.
     free(dades);
     dades=NULL;
     
    return 0;
    
}