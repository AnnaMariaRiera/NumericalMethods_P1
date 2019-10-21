//Suma CREIXENT float
#include<stdio.h>
#include<stdlib.h>

int main()
{
 float n,s; //Variables en precisió simple: n és el nombre fins el que sumarem la sèrie i s serà el valor total de la suma.
 printf("Introdueix el numero de termes que vols sumar: \n");
 scanf("%f",&n);

 int i; //Variable entera auxiliar per fer el bucle for
 float k, signe; //Variables en precisió simple: k és el nombre que s'està sumant a la sèrie i signe és una variable auxiliar per a què els termes senars siguin positius i els parells negatius al fer la sèrie
 k=0;
 s=0; //Inicialitzem la suma a 0
 signe=(-1);
 for(i=1;i<=n;i++)
 {
     signe=(-1)*signe;
     k=k+1;
     s=s+signe*(1./(k*k)); //Suma total, torna un valor en precisió simple
 }
 
 printf("El resultat sumant creixent es:%f\n",s);

 return 0;

}
   


  