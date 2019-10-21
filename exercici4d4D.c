#include<stdio.h>
#include<stdlib.h>

int main()
{

 double n, sum1,sum2,s; //Variables en precisió doble: n és el nombre desde el que sumarem la sèrie en ordre creixent, sum1 una variable auxiliar per anar sumant tots els com si foren termes positius, sum2 suma dels negatius i s serà el valor total de la suma.
 printf("Introdueix el numero de termes que vols sumar: \n");
 scanf("%lf",&n);

 int i; //Definim un enter que farà el paper de la k de la fórmula de l'enunciat: el nombre que es va sumant de n fins a 1
 sum1=0,sum2=0;//Inicialitzem a zero la suma dels termes positius i els negatius
 for(i=1;i<=n;i++)
 {
   sum1=sum1+(1./(i*i)); //Suma de tots els termes, independentment del signe, torna un valor amb precisió doble
 }
 for(i=1;i<=n;i++)
 {
 if(i%2==0)
   {
     sum2=sum2+(1./(i*i));//Suma dels nombres positius. Torna un valor en precisió doble
   }
 }
 s=sum1-2*sum2;//Suma total; torna un valor en precisió doble
 printf("El resultat sumant decreixent es:%.16f\n",s);

 return 0;

}