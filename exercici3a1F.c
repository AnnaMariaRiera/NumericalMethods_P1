#include <stdio.h>
#include <stdlib.h>
int main()
{
  float n; //Variable en precisió simple que representa el nombre de valors dels quals volem calcular la variança.
  float s2; //Variable en precisió simple, és la variança dels valors.
  float *dades; //Vector de valors en precisió simple, són els valors dels quals calculem la variança.
  printf("Introdueix el numero de dades que tenim:\n");
  scanf("%f",&n);
  dades=(float*)malloc(n*sizeof(float));
  
  if(dades==NULL)
  {
    printf("Hi ha error");
    free(dades);
    return 1;
  }
  int resposta; //Considerem una variable entera 'resposta' que ens servirà per determinar si l'usuari vol introduir les dades manualment o no (associant cada opció a una resposta, i qualsevol altra resposta a un error).
  int i; //Variable entera que utilitzem al bucle for.
  printf("Vols introduir els valors manualment?\n 1-Si \n 2-No\n");
  scanf("%d",&resposta);
  
  if(resposta==1)
  {
    
    for(i=0;i<n;i++) //Amb aquest bucle for demanem a l'usuari el valor de cada component del vector.
    {
      printf("Introdueix el valor %d de les dades:",i+1);
      scanf("%f",&dades[i]);
    }
	}
   else if (resposta==2)
   {
   for (i=0; i<=(n-1); i++) //Emplenem les caselles del vector, assumint que si l'usuari no vol fer-ho manualment assignarem valor i a la component i del vector.
  {
    dades[i]=i;
  }
  }
  else { printf("Error"); return 0; }
    int j; //Variable entera que utilitzem al bucle for.
    float sum,sum2; //'sum' és la suma dels valors, ens retornarà un valor amb precisió simple; 'sum2' és la suma dels valors al quadrat, ens retornarà un valor amb precisió simple.
    sum=0; //Inicialitzem 'sum' a 0.
    sum2=0; //Inicialitzem 'sum2' a 0.
    for(j=0;j<n;j++)
    {
      sum=sum+dades[j];
      sum2=sum2+(dades[j]*dades[j]);
    }
    s2=(1./(n-1))*(sum2-((1./n)*sum*sum)); //Amb els valors calculats al bucle for de 'sum' i 'sum2', podem aplicar la fórmula de l'enunciat i calcular la variança, que com hem dit anteriorment ens retornarà un valor amb precisió simple.
    
    
     printf("La variança es: %f\n",s2); //Ens imprimeix el resultat final de la variança.
     free(dades);
     dades=NULL;
     
    return 0;
    
}
  