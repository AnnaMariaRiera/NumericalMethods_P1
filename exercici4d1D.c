//Suma CREIXENT double
#include<stdio.h>
#include<stdlib.h>


//MODIFICAR EL DENOMINADOR DE LES SUMES DE MANERA QUE SIGUI DOUBLE (de tots els 4d)

int main()
{

 double n, sum1,sum2,s; //Variables en precisió doble: n és el nombre fins el que sumarem la sèrie, sum1 una variable auxiliar
                        //per anar sumant els termes positius, sum2 el mateix per als negatius i s serà el valor total de la suma.
 printf("Introdueix el numero de termes que vols sumar: \n");
 scanf("%lf",&n);

 int i; //Definim un enter que farà el paper de la k de la fórmula de l'enunciat: el nombre que es va sumant de 1 fins a n
 sum1=0,sum2=0; //Inicialitzem a zero la suma dels termes positius i els negatius
 for(i=1;i<=n;i++)
 {
   if(i%2==0)
   {
     sum1=sum1-(1./(i*i)); //Suma dels nombres positius. Torna un valor en precisió doble
   }
   else
   { 
     sum2=sum2+(1./(i*i)); //Suma dels nombres negatius. Torna un valor en precisió doble
   } 
 }
 s=sum1+sum2; //Suma total; torna un valor en precisió doble
 printf("El resultat sumant creixent es:%.16f\n",s);

 return 0;

}