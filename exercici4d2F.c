//Suma DECREIXENT float
#include<stdio.h>
#include<stdlib.h>

int main()
{

 float n, sum1,sum2,s;//Variables en precisió simple: n és el nombre desde el que sumarem la sèrie en ordre decreixent, sum1 una variable auxiliar per anar sumant els termes positius, sum2 el mateix per als negatius i s serà el valor total de la suma.
 printf("Introdueix el numero de termes que vols sumar: \n");
 scanf("%f",&n);

 int i; //Definim un enter que farà el paper de la k de la fórmula de l'enunciat: el nombre que es va sumant de n fins a 1
 sum1=0,sum2=0;//Inicialitzem a zero la suma dels termes positius i els negatius
 for(i=n;i>=1;i--)
 {
   if(i%2==0)
   {
     sum1=sum1-(1./(i*i));//Suma dels nombres positius. Torna un valor en precisió simple
   }
   else
   { 
     sum2=sum2+(1./(i*i));//Suma dels nombres negatius. Torna un valor en precisió simple
   }
 }
 s=sum1+sum2;//Suma total; torna un valor en precisió simple
 printf("El resultat sumant decreixent es:%f\n",s);

 return 0;

}
